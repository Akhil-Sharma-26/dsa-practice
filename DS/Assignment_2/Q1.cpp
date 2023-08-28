#include <iostream>
using namespace std;
int Binary(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int med = start + ((end - start) / 2);
        if (arr[med] == key)
        {
            return med;
        }
        else
        {
            if (key > arr[med])
            {
                start = med + 1;
                end = size - 1;
                
                med = start + ((end - start) / 2);
            }
            else
            {
                start = 0;
                end = med - 1;
               
                med = start + ((end - start) / 2);

              
        }
    }
}
    return -1;
}
int main()
{
    int arr[5] = {3, 5, 6, 23, 40};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int indx = Binary(arr, 5, key);
    if (indx == (-1))
    {
        cout << "Key is not present";
    }
    else
    {
        cout << "The key is present at index: " << indx;
    }
}

