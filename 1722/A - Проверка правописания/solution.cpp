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
    string s;
    cin>>s;
    unordered_map<char,int>m;
    m['T']=1;
     m['i']=1;
      m['m']=1;
       m['u']=1;
        m['r']=1;
    for(auto &i:s){
        m[i]--;
    }
    for(auto &i:m){
        if(i.second!=0) {cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
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
 
 