#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>


void solve(vll a,ll s,ll i,ll rsum,vll sub){
    if(s>rsum || i>a.size()){
        return;
    }
    if(s==rsum){
        for(auto it:sub){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    sub.push_back(a[i]);
    solve(a, s + a[i], i+1, rsum, sub);
    sub.pop_back();
    solve(a, s, i+1, rsum, sub);
    // cout<<s<<endl;
}

int main()
{
    ll rsum=7;
    vll a{2,3,4,5};
    ll i=0,s=0;
    vll sub;
    solve(a,s,i,rsum,sub);
	return 0;
}