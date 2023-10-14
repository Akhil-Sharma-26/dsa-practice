#include <bits/stdc++.h>
using namespace std;
int main()
{
    int allocated[5][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int maxNeed[5][3] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {4, 2, 2}, {5, 3, 3}};
    int CurrNeed[5][3];
    int totalResources[3] = {10, 5, 7};
    int availableResource[5][3]={{3,3,2}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            CurrNeed[i][j] = maxNeed[i][j] - allocated[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << CurrNeed[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    // For available resources:
    // int sumA = 0, sumB = 0, sumC = 0;
    // for (int j = 0; j < 5; j++)
    // {
    //     sumA = sumA + allocated[j][0];
    //     sumB = sumB + allocated[j][1];
    //     sumC = sumC + allocated[j][2];
    // }
    // cout<<sumA<<sumB<<sumC;
    int count,num;
    vector<int> procees;
    int A=3,B=3,C=2; // assuming 
        count = 0;
        bool flag=false;
    for (int i = 0; ; i=(i+1)%5)
    {
        // for (int j = 0; j < 3; j++)
        // {
            // cout<<"hello";
            if(CurrNeed[i][0]<=A && CurrNeed[i][1]<=B && CurrNeed[i][2]<=C){
                // availableResource[i+1][j]=allocated[i][j]+availableResource[i][j];
                A=A+allocated[i][0];
                B=B+allocated[i][1];
                C=C+allocated[i][2];
                // cout<<"hello";
                count++;
                procees.push_back(i);
            }
            
            if(count==7){
                flag=true;
                cout<<endl<<"safe";
                break;
            }
            
        // }
        // if(count==2){
                
        // }
    }
    cout<<endl<<"safe sequence: ";
    for(int j=0;j<7;j++){
        cout<<procees[j]<<" ";
    }
}