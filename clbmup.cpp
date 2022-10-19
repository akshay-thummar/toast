#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n+1];
        for (int i = 0; i < n+1; i++)
        {
            if(a[i]<a[0])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}