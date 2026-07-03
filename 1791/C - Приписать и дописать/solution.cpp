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
    string s;
    cin>>s;
    int ans=0;
    int l,r;
    if(n&1){
        ans=1;
        l=n/2-1;
         r=n/2+1;
    }
    else{
         l=n/2-1;
       r=n/2;
    }
        //ans++;
        // while(l>=0 && r<n){
        //     if(s[l]==s[r]) ans+=2;
        //     l--;
        //     r++;
        // }
        // cout<<ans<<endl;
         while(l>=0 && r<n){
            if(s[l]==s[r]) {
             
                ans=max(ans,r-l+1);
            }
            l--;
            r++;
        }
        cout<<ans<<endl;
    // }
    // else{
    //    int l=n/2-1;
    //    int r=n/2;
    //     while(l>=0 && r<n){
    //         if(s[l]==s[r]) {
             
    //             ans=max(ans,r-l+1);
    //         }
    //         l--;
    //         r++;
    //     }
    //     cout<<ans<<endl;
    // }
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