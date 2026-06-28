#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
 
void solve()
{
    char ans;
    for(int i=0;i<3;i++){
        ll sum=0;
        for(int j=0;j<3;j++){
            char ch;
            cin>>ch;
            if(ch!='?')sum+=int(ch);
        }
        int z=198;
        int p=z-sum;
        if(p!=0) ans= char(p);
    }   
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
 
 
  
    // solve();
 
   return 0;    
}
 
 