#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v;
        for (int i = 0; i < n; i++){
            int in;
            cin>>in;
            v.push_back(in);
        }
        set<int> s;
        for (int i = 0; i < v.size(); i++)
            s.insert(v[i]);
            
        int a=s.size();
        int m=n-x;
        if(a<=m)
            cout<<a<<endl;
        else
            cout<<m<<endl;      

        
    }
    
    return 0;
}