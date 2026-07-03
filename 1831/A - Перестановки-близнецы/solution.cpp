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
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]=i;
    }
    int z=n;
    vector<int>ans(n);
    for(auto &i:m){
        ans[i.second]=z;
        z--;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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