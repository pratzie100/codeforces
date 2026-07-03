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
 
    int minus=0;
    int plus=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1) minus++;
        else plus++;
    }
 
    if(plus>=minus && minus%2==0 ){
        cout<<0<<endl;
    }
 
    else{
        if(plus>=minus){
            cout<<1<<endl;
        }
        else{
 
            int req=ceil((minus-plus)/2.0); //since one operation affects counts of both, 
            //we reach to our goal by 2X speed so divide by 2
 
            minus-=req;
 
            //if after balancing, still minus count is odd, then one more operation
            if(minus%2!=0) req++;
            cout<<req<<endl;
        }
 
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