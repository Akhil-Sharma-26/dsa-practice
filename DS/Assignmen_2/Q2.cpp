#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        // for round n-1
        for(int j=0;j<n-i;j++){ 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        
        if(swapped==false){
            // means already sorted
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}

int main(){
    int arr[7]={64,34,25,12,22,11,90};
    bubble(arr,7);
}