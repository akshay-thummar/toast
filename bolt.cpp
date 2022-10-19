#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        double k1,k2,k3,v;
        double run,ans,answer;
        cin>>k1>>k2>>k3>>v;
        run=k1*k2*k3*v;
        ans=100/run;
        answer=floor((ans*100)+0.5)/100;
        

        if(answer<9.58)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}