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
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){ 
        int x;
        cin>>x;
        m[x]++;
    }
 
    int j=m.size();
    if(j>2) cout<<"NO"<<endl;
    else {
        if(j==1) {cout<<"YES"<<endl; return;}
 
        for(auto &i:m){
            if(i.second!=n/2 && i.second!=(n-n/2)) {cout<<"NO"<<endl; return;}
        }
        cout<<"YES"<<endl;
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
 
 
  
    // solve();
    
    ///*@CodingBoy100*/
   return 0;    
}
 
 