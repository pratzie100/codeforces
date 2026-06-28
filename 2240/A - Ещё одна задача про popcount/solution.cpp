#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    
    if(n<=k) {
        cout<<n<<"
";
        return;
    }
 
    ll rem=n-k;
    ll ans=k;
 
    for(int i=1;i<32;i++){  //think bit wise vertically
    	ll bitval=1<<i;
    	int slotsused=min(k,rem/bitval);
    	ans+=slotsused;
    	rem-=slotsused*bitval;
    }
    cout<<ans<<endl;
 
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
 
 
  
    // solve();
 
   return 0;    
}
 
 
 
 
 
 