// #include<iostream>
// #define N 30
// using namespace std;
// void del(int arr[],int size,int pos){

// }
// void search(){
    
// }
// void deleteduplicate(int arr[],int size){
//     search();
//     int pos;
//     if(true){
//         del(arr,size,pos);
//     }
// }
// int main(){
//     int n=10;
//     int arr[N]={2,3,2,7,3,26,4,2,6,6};
//     cout<<"do you want to remove the duplicate elements? : (TYPE: y for yes, n for no)"<<endl;
//     string abc;
//     cin>>abc;
//     if(abc=="y"){
//         deleteduplicate(arr,n);
//     }
// }

// #include <iostream>
// using namespace std;

// void removeDuplicates(int arr[], int& size) {
//     for (int i = 0; i < size; ++i) {
//         for (int j = i + 1; j < size;) {
//             if (arr[i] == arr[j]) {
//                 // Shift elements to overwrite the duplicate
//                 for (int k = j; k < size - 1; ++k) {
//                     arr[k] = arr[k + 1];
//                 }
//                 --size; // Decrement the size of the array
//             } else {
//                 ++j;
//             }
//         }
//     }
// }

// int main() {
//     int inputArray[] = {2, 4, 6, 8, 4, 10, 6, 12,6,6,23,6};
//     int size = sizeof(inputArray) / sizeof(inputArray[0]);
//     cout<<"before removing: ";
//      for (int i = 0; i < size; ++i) {
//         std::cout << inputArray[i] << " ";
//     }
    
//     removeDuplicates(inputArray, size);
    
//     cout<<endl<<"after removing:"<<endl;
//     for (int i = 0; i < size; ++i) {
//         std::cout << inputArray[i] << " ";
//     }
    
//     return 0;
// }