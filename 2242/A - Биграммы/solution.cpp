#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
 
const ll M= 1000000000000000007LL; 
const ll MOD = 1000000007LL;
const ll MOD2 = 998244353;
 
void solve(){
    int k;
    cin>>k;
  //  unordered_map<int,int>m;
    int c=0;
    bool good=0;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
 
        if(x>=3) {good=1;}
        else if(x==2){
            c++;
        }
 
       // m[x]++;
    }
   if(good) {cout<<"YES"<<endl; return;}
    if(c>=2){// abab
             cout<<"YES"<<endl; 
    }
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
 
 
  
  //  solve();
       ///*@CodingBoy100*/
   return 0;    
}
 
 
 