#include <bits/stdc++.h>
using namespace std;
int sum(int n){
	int s=0;
	while(n>0){
		s=s+(n%10);
		n=n/10;
	}
	return s;
}
int main(){
    int n;
    cin>>n;
    int c=0,i ;
    for(i=max(1,n-100);i<n;i++){
    	if(i+sum(i)+sum(sum(i))==n){
    		c++;
		}
	}
	cout<<c<<endl;
    return 0;
}