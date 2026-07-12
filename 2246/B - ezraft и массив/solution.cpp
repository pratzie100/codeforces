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
    ll n;
    cin>>n;
    //1
    //1+2=3
    // 1+2+3 = 6
    // 1+2+3+4=10 //1+2+3+x=6+x   //x= has to be  multiple of 6 //1+2+3+6 =12
    // 1+2+3+6+ x  //x= multiple of 12  //1+2+3+6+12 = 24
    // 1+2+3+6+12+x // x=multiple of 24  //1+2+3+6+12+24= 48
    // 1+2+3+6+12+24+x // x=multiple of 48  //1+2+3+6+12+24+48= 96
 
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else if(n==2){
// e+o  no  ,  o+e no , distinct e+e  2+4 =6  ,  4+8 (has to be same numbers not allowed)
// o+o =  e  (not possible)
 
    cout<<-1<<endl;  
    }
    else{
        int k=n-3;
 
        cout<<1<<" "<<2<<" "<<3<<" ";
        ll d=6;
        while(k--){
            cout<<d<<" ";
            d*=2;
        }
        cout<<endl;
 
    }
 
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