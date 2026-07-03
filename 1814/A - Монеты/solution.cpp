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
    if(n%2==0) cout<<"YES"<<endl;  //since we have 2
    else{   //n is odd
        if(k%2==0) cout<<"NO"<<endl; // since 2 and k both even, sum can never be odd
        else{    // n is odd and k is odd
            //always YES since, k<=n  and k multiplied by odd number y will always be odd
            // then then distance btw n=odd and k*y=odd will always be even, that can be covered by 2
            //k=n case will be handled by k only no need of 2..
    
            cout<<"YES"<<endl;
        }
    }
 
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
 
 
  
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}