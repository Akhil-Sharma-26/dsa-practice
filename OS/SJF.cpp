
#include <algorithm> // include the algorithm header for std::sort
#include <iostream>
#define len 5
using namespace std;

int main(){
    int bt[len]={6,12,5,10,2};
    int wt[len]={0};
    int tat[len];
    int awt,sum=0,sum2=0;
    std::sort(bt, bt + len);
    cout<<wt[0];
    for(int i=1;i<5;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
    for(int i=0;i<=5;i++)
        tat[i]=wt[i]+bt[i];
    for(int i=0;i<5;i++){
        sum=sum+wt[i];
        sum2=sum2+tat[i];
        cout<<"wt for p"<<i+1<<" is: "<<wt[i]<<endl;

    }
    for(int i=0;i<5;i++)
        cout<<"tat for p"<<i+1<<" is: "<<tat[i]<<endl;
    cout<<"Average waiting is:"<<sum/5<<endl;
    cout<<"Average turn around time is:"<<sum2/5<<endl;
    return 0;     
}