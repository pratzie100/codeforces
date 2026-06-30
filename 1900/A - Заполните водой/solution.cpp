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
 
    int st=0;
    int maxi=0;
    for(int i=0;i<n;){
        int d=i;
        while(s[d]=='.'){
            st++;
            d++;
            if(d==n) break;
        }
        if(st>=3){cout<<2<<endl; return;}
        st=0;
        i=d+1;
    }
    int cnt=0;
    for(auto &i:s){
        if(i=='.') cnt++;
    }
    cout<<cnt<<endl;
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
 
 