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
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    //idea: we need minimum distinct numbers = (length of largest same character substring) + 1
    // for ex.. << = 1 2 3 = (2) + 1  ,  <<>> = 1 2 3 2 1 = (2)+1
    // greater thans will be balanced by same elements (of lesser thans) in opposite order
    int lt=0;
    int gt=0;
    int ans=INT_MIN;
    for(int i=0;i<n;){
        if(s[i]=='<'){
            
            while(i<n && s[i]!='>'){
                lt++;
                ans=max(ans,lt);
                i++;
            }
            lt=0;
 
        }
        else{
 
                while(i<n && s[i]!='<'){
                    gt++;
                    ans=max(ans,gt);
                    i++;
                }
 
                gt=0;
        }
 
    }
    cout<<ans+1<<endl;
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