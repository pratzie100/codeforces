#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
 
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
 
    if(n==a && n==b) {
        cout<<"Yes"<<endl;
        return;
    }
    
    int x=(a-1)+1;
    int y=((n-b)-1);
    int p=y-x+1;
 
    if( p > 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl; 
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