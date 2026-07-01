#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    // int n;
    // cin>>n;
    // vector<int>arr(n);
 
    // ll sum=0;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     sum+=x;
    // }
 
    // ll r= 2*sum - arr[0] - arr[n-1];
 
    // float a=r/((n-1)*1.0);
    // cout<<a<<endl;
    // // int y=a*10;
    // // cout<<y<<endl;
    // int t=r/n;
    // cout<<t<<endl;
    // if(a==t) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
 
    int x,y;
    cin>>x>>y;
 
    if(x%y==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 
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
    
    ///*@CodingBoy100*/
   return 0;    
}
 
 