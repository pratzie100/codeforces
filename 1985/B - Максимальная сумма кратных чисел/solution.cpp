#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int n;
    cin>>n;
    ll sum=INT_MIN;
    int ans;
    for(int x=2;x<=n;x++){
        int k=1;
        ll s=0;
 
        while(k*x <= n){
            s+=k*x;
            k++;
        }
        if(s>sum){
            sum=s;
            ans=x;
        }
 
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
 
 