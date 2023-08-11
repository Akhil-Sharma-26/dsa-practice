#include<iostream>
#define N 50
using namespace std;
void print(int arr[N][N],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void transpose(int arr[N][N],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i<j){ // to provide break point
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

            }
        }
    }
}
int main(){
    int arr[N][N]={{25,26,46},{52,634,46},{52,63,47}};
    int n=3;
    print(arr,n);
    transpose(arr,n);
    cout<<endl;
    print(arr,n);
}
// 