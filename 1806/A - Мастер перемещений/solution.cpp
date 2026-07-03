#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    //(x+1,y+1) or point (x−1,y)
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    ll ans=0;
    if(b>d) {cout<<-1<<endl; return;}
    else{
        ll vert=d-b;
        ans+=vert;
        ll hori=a+vert;
 
        if(hori<c) {cout<<-1<<endl; return;}
 
        else{
            ans+=hori-c;
        }
 
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
 
 
  
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}