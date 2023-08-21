// ! Optimized version of the Question, using binary search:
// ? Missing elements in a sorted array. It's time complexity is O(log n)
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
void missing_usignBinarySearch(int arr[],int size){
    int start=0;
    int end=size-1;
        int mid=(start+end)/2;
    while(start<=end){
        // if(arr[mid]==mid+1 && arr[mid]==mid-1){
        //     start=mid+1;
        //     cout<<"hey";
        //     cout<<mid;
        
        // }
        // else{
        //     end=mid-1;
        //     cout<<"hello";
        //     cout<<mid;
        // }
        if(arr[mid]!=mid+1 && arr[mid]!=mid+1){
            end=mid-1;
            mid=(start+end)/2;
        }
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }

    cout<<endl<<"missing is: "<<mid+2;
}
int main(){
    int arr[]={7,6,5,3,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
    missing_usignBinarySearch(arr,size);
    return 0;
}