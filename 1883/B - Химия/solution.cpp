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
    int n,k;
    cin>>n>>k; 
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(char c:s){
        m[c]++;
    }
    //k chars to be removed must be odd freq chars..
    //coz even freq chars will always be arrangable in palindrome after deletions
    
    int bad=0; //count of odd frequency chars
    for(auto i:m){
 
        if(i.second&1) bad++;  
    }
    int allowed=bad-1;  // minimum odd freq chars that must be deleted
 
    //(-1 for cases like "awa"..here w need not be deleted..
    //odd length palindrome has just 1 odd freq char, which has freq 1, which is allowdable to stay) 
 
    if(allowed>k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
 
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