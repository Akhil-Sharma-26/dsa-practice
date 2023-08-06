#include<iostream>
#define N 50
using namespace std;
void print(int arr[N][N],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
        }
    }

}
void multiply(int arr[2][2],int arr2[2][2],int size){
    int prod[N][N],sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                sum=sum+arr[i][k]*arr2[k][j]; // row of 1st element multiplied acc. to the column of 2nd
            }
            prod[i][j]=sum;
            sum=0;
        }
    }
    print(prod,2);
}

int main(){
    int arr[2][2]={{2,5,},{6,2}};
    int arr2[2][2]={{3,6},{7,8}};
    multiply(arr,arr2,2);
    
}
// TODO:
// add the exceptions:
// turn this program to take any user input.