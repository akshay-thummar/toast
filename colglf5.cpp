#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int t; 
  cin>>t;
  while(t--){
        int n, m; 
        cin>>n>>m;
        int f[n+1] = {}, c[m];
        for(int i = 1; i <= n; i++)
            cin>>f[i];
        for(int j = 0; j < m; j++)
            cin>>c[j];

        int ans = 0, i = 0, j = 0, turn = 0;
        while(i <= n && j < m){
            if(turn)
                while(c[j] < f[i])j++;
            else
                while(f[i] < c[j])i++;
            turn = 1 - turn;
            ans++;
        }
        cout<<ans<<endl;
    }
  return 0;
}