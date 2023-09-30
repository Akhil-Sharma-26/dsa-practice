#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main(){
    fork();
    cout<<"fork 1";
    fork() && fork() || fork();
    cout<<"fork 2";
    fork();
    cout<<"TIET \n";
    return 0;
}