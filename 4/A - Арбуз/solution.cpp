#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
//4A
 
    int w;
    cin>>w;
    //6, 10 are not bad..  we can do 2+4, 8+2
    //odds are already bad,  even bad is just 2
    if( w%2==0 && w!=2) cout<<"YES";  
    else cout<<"NO";
}
 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
 
   // int t; 
   // cin>>t; 
   // while(t--)
   // { 
   //     solve();
   //  }
 
 
  
     solve();
 
   return 0;    
}
 
 