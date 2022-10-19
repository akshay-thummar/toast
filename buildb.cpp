#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int main(){
    FAST
    
    int t; cin>>t;
    while(t--){
        ll n,r;
        cin>>n>>r;
        vector<int> a, b;
        for (ll i = 0; i < n; i++){
            ll in; cin>>in;
            a.push_back(in);
        }
        for (ll i = 0; i < n; i++){
            ll in; cin>>in;
            b.push_back(in);
        }
        ll v = accumulate(b.begin(),b.end(),0);
        ll y = a.size()-1;
        ll ans = v-(y*r);
        cout<<ans<<endl;
    }
    
    return 0;
}