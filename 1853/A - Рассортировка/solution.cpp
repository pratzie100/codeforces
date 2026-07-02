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
    vector<int>arr(n);
    bool sorted=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0 && arr[i-1]>arr[i]) sorted=0;
    }
    if(!sorted) cout<<0<<endl;
    else{
        int d=INT_MAX;
        for(int i=0;i<n-1;i++){
            d=min(d,arr[i+1]-arr[i]);
        }
        cout<<d/2+1<<endl;
 
 
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