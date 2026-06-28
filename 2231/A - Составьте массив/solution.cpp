#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
const ll MOD = 998244353LL;
 
 
void solve()
{
    int n;
    cin>>n;
    int c=2*n;
    while(n--) {
        cout<<c<<" ";
        c--;
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
 
 
  
    // solve();
 
   return 0;    
}
 