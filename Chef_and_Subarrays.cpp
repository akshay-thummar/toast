#pragma GCC optimize("Ofast","unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10E9+7 //1000000007
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
    FAST;
    
    int t; cin>>t;
    while(t--){
        ll n,k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin>>v[i];
        for (int i = 0; i < v.size(); i++)
            cout<<v[i];

    }
    
    return 0;
}