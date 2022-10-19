#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,i,sum=0; cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin>>v[i];

        sort(v.begin(),v.end(),greater<int>());

        for (int i = 0; i < v.size(); i++){
            if(i%2==0){
                sum+=v[i];
            }
        }
        cout<<sum;   
    
    }
    return 0;
}