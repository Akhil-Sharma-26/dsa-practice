#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main(){
    fork();
    if(fork() && fork()){
        cout<<" Mid SEM "<<endl;
        fork();
    }
    fork();
    cout<<"2023"<<endl;
    return 0;
}