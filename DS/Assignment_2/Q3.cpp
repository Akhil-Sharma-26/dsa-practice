#include<iostream>
using namespace std;
void bubble(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void missing(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int n=size+1;
    int total=(n*(n+1))/2;
    cout<<"Missing Number is: "<<total-sum;
}
int main(){
    int arr[]={7,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
    missing(arr,size);
    return 0;
}