#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insert(int arr[],int size,int pos, int num ){
    size++;
    for(int i=size-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    cout<<endl;
    printarr(arr,size);
}
void del(int arr[],int size,int pos){
    for(int i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    
    printarr(arr,size);
}
void search(int arr[],int size, int key){
    bool flag,temp;
    for(int i=0;i<size-1;i++){
        if(arr[i]==key){
            flag=true;
            temp=i;
        }
        else{
            flag=false;
        }
    }
    if(flag){
        cout<<"found at: "<<temp<<endl;
    }
    else{
        cout<<"not found";
    }
}
int main(){
    int n=5;
    int arr[n]={2,3,5,7,8};
    int x,pos,num1,key,count=0;
    while(1){
    cout<<endl<<"Hello world! \n select the operatio you want to perform: \n 1. Display \n 2. Insert \n 3. Deletion \n 4. Search \n 5. Exit"<<endl;
        cout<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        printarr(arr,n);
        break;
    case 2:
        cout<<"Enter the position where you want to enter the element: "<<endl;
        cin>>pos;
        cout<<endl<<"Enter the number to be entered: "<<endl;
        cin>>num1;
        if(1){
        insert(arr,n,pos-1,num1);
        count++;
        }
        break;
    case 3:
        cout<<"enter the position you want to delete: "<<endl;
        cin>>pos;
        if(n<=5){
        del(arr,n,pos);
        }
        else{
            del(arr,n+count,pos);
        }
        break;    
    case 4:
        cout<<"Enter the element you want to search: "<<endl;
        cin>>key;
        search(arr,n,key);
        break;
    case 5:
        goto exit;
        break;
    default:

        break;
    }

    }
    exit: ;
    return 0;
}