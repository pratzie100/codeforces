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
   int ans=INT_MAX;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    int y=abs(x);
    ans=min(ans,y);
   } 
   cout<<ans<<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
//   int t; 
//   cin>>t; 
//   while(t--)
//   { 
//       solve();
//     }
 
 
  
    solve();
    
    ///*@CodingBoy100*/
   return 0;    
}