#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
//1850A
    int mini=INT_MAX;
    int sum=0;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        sum+=x;
        mini=min(mini,x);
    }
    int maxtwo= sum-mini;
    if(maxtwo>=10) cout<<"YES"<<endl;
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
 
   return 0;    
}
 
 