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
    int n;
    cin>>n;
    // just make sure odd indices get even values, and even indices odd..
    //goal is just to make i.Pi as even (-i.Pi) is auto even... total sum can never be odd number like 1
    //no matter what startegy opponent use
    int c=1;
    int d=2;
    for(int i=1;i<=n;i++){
        if(i&1){
            cout<<d<<" ";
            d+=2;
        }
        else{
            cout<<c<<" ";
            c+=2;
        }
    }
    cout<<endl;
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