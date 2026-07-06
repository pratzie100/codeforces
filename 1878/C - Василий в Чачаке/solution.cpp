#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL;  
const ll M= 1000000000000000007LL; 
const ll MOD = 1000000007LL;
const ll MOD2 = 998244353;
 
void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
 
//What are the smallest and largest possible sums?
//say n=6 , k=2
    ll r=n-k; // smallest n-k elements  1+2+3+4
    ll maxwithk=  (n*(n+1)/2)- (r*(r+1)/2);  //last k elements   i.e, 5 + 6
 
    ll minwithk= (k*(k+1)/2); // first k elements .i.e, 1 + 2
 
   // cout<<maxwithk<<" "<<minwithk<<endl;
    
    if(x< minwithk || x>maxwithk) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
 
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