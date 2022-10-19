#pragma GCC optimize("Ofast","unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10E9+7 //1000000007
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

ll ans(string s){
    ll dist=0;
    for(ll i=0;i<(ll)(s.size()-1);i++){
        if(s[i]==s[i+1])
            dist += 2;
        else
            dist += 1;
    }
    return dist;
}

int main(){
    FAST;

    int t; cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cin.ignore(100,'\n');
        string s;
        cin>>s;
        vector<ll> v(k,0);
        for(ll i=0;i<k;i++)
            cin>>v[i];
        for(ll i=0;i<k;i++){
            ll ind = v[i]-1;
            if(s[ind]=='0')
                s[ind] = '1';
            else
                s[ind]='0';
            cout<<ans(s)<<endl;
        }
    
    return 0;
    }
}