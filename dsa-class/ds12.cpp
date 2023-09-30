// C++ program for Sparse Matrix Representation
// using Array
#include <iostream>
using namespace std;

int main()
{
    // Assume 4x5 sparse matrix
    int sparseMatrix[4][5] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};

    int size = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
                size++;

    int compactMatrix[size + 1][3];

    // Making of new matrix
    int k = 1;
    cout << "Sparse matrix representation:\n";
    compactMatrix[0][0] = 4;
    compactMatrix[0][1] = 5;
    compactMatrix[0][2] = size;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[k][0] = i;
                compactMatrix[k][1] = j;
                compactMatrix[k][2] = sparseMatrix[i][j];
                k++;
            }

    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << " " << compactMatrix[i][j];

        cout << "\n";
    }
    return 0;
}