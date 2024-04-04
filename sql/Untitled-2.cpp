#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll unsigned long long
#define pb push_back
#define endl "\n"

int mod = 1e9+7;
int N = 1e5+10;

void print(vector<ll>v){
        for(int i = 0;i<v.size();i++){
                cout<<v[i]<<" ";
        }
        cout<<endl;
}

void input(vector<ll>&v){
        for(int i = 0;i<v.size();i++){
                cin>>v[i];
        }
}
int main(){
        #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
        freopen("output.in","w",stdout);
        #endif
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t = 1;
        cin>>t;
        while(t--){
            ll n,q;
            cin>>n>>q;
            vector<ll>a(n);
            input(a);
            ll sum=0;
            sort(a.begin(),a.end());
            vector<vector<ll>>abc;
            abc.push_back(a);
            while(next_permutation(a.begin(),a.end())){
                    abc.push_back(a);
            }
            vector<ll>sumi;
            for(int i=0;i<abc.size();i++){
                sum=0;
                for(int j=0;j<n-1;j++){
                    sum+=abc[i][j]+abc[i][j+1];
                }
                sumi.push_back(sum);
            }
            vector<ll>alo;
            for(int i=0;i<q;i++){
                ll sa;
                cin>>sa;
                alo.push_back(sa);
            }
            
            for(auto it:alo){
                bool flag=true;
                for(int i=0;i<sumi.size();i++){
                    if(it==sumi[i]){
                        print(abc[i]);
                        flag=false;
                        break;
                    }
                }
                if(flag)
                cout<<-1<<endl;
            }
                // cout<<-1<<endl;
            }


}