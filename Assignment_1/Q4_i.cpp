#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        int start=i,end=size-i-1;
        if(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
        else{
            break;
        }    
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
}