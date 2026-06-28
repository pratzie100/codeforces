#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
 
void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(begin(v),end(v),greater<int>());
    
    bool exist=1;
    ll x,y;
    for(int i=0;i<n-2;i++){
        ll rem= v[i]%v[i+1];
        if(rem==v[i+2] && i==0) { x=v[i]; y=v[i+1]; continue;}
        if(rem!=v[i+2]) exist=0;        
    }
    if(exist) {
        
        if(n==2) cout<<v[0]<<" "<<v[1]<<endl;
        
        else cout<<x<<" "<<y<<endl;
    }
    
    else cout<<-1<<endl;
}
 
int main() {
	ios::sync_with_stdio(false);
   cin.tie(0);
 
    int t; 
    cin>>t; 
    while(t--)
    { 
        solve();
 
 
    }
 
  
//  solve();
    
   return 0;    
}