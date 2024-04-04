#include<bits/stdc++.h>
using namespace std;
void loop_test(int n){
    if(n == 0) {
        return; // Add base case to stop recursion when n becomes 0
    }
    if(n>0){
            loop_test(n-1);
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    loop_test(10);
}