#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
const ll MOD = 998244353LL;
 
 
int checksum(vector<vector<int>>&v, int i, int j){
    int n=v.size();
    int sum=v[i][j];
    if(i-1>=0){
        sum+=v[i-1][j];
    }
        if(i+1<n){
        sum+=v[i+1][j];
    }
    if(j-1>=0){
        sum+=v[i][j-1];
    }
    if(j+1<n){
        sum+=v[i][j+1];
    }
    return sum;
}
 
 
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
 
    int y=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=y;
            y++;
        }
    }
 
    int ans=INT_MIN;
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans=max(ans,checksum(v,i,j));
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
 
 
  
    // solve();
 
   return 0;    
}
 
 