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
 
    //b1+b2=b2+b3 ...
    // b1=b3=b5 ...
 
    //b2+b3=b3+b4 ...
    // b2=b4=b6...   (see given formula carefully to observe things)
 
    // clearly count of distinct elements cant be greater than 2
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
 
        // 2 distinct elements are exact 2, 
        //one must fill all odd positions, other the even positions
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
 
 