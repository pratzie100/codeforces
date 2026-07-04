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
 
    int ans=0;
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x&1){
            odd++;
            if(even>=2) ans+=even-1;
 
            even=0;
        }
        else{
            even++;
            if(odd>=2) ans+=odd-1;
 
            odd=0;
        }
    }
    // for test cases like 2 2 2  or  5 5 5 5..check at end
    if(odd>=2) ans+=odd-1; 
    else if(even>=2) ans+=even-1;
 
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
 
 
  
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}