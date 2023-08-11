#include<iostream>
#define N 50
using namespace std;
int main(){
    int arr[N][N]={{2,6,43},{62,764,76},{529,623,457}};
    // int arr[N][N]={{1,1,1},{2,2,5},{3,3,3}};
    int n=3,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<"sum of row "<<i+1<<"is: "<<sum<<endl;
        sum=0;
    }
    for(int i=0;i<n;i++){
        int j=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        cout<<"sum of column "<<j+1<<"is: "<<sum<<endl;
        j++;
        sum=0;
    }
}