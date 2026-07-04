#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
 
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
 
    if(n==a && n==b) {  //base case treated separately..always true
        cout<<"Yes"<<endl;
        return;
    }
 
    //O-BASED INDEXES
    int x=(a-1)+1;   //index just after prefix block ended
    int y=((n-b)-1); // index just before suffix block started
    int p=y-x+1;  // no.  of elements in btw these two blocks
 
    if( p > 1)  // no overlap condition 
        cout<<"Yes"<<endl;  
    else 
        cout<<"No"<<endl; 
 
    // we can also do.. x=a-1 , y= n-b , and p=y-x ..then later on check if (p-1)>1 ..
    //for ex  x= 3  y=6   then index 4,5 in middle...  p=6-3=3   check 2>1 yes ...
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