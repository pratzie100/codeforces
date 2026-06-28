#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int n,k;
    cin>>n>>k;
 
 
    int t=-1;
    int r=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=t){
            t=x;
            r++;
        }
 
    }
    if(k>=2) {
        cout<<"YES"<<endl;
        return;
    }
 
    if(r==n)cout<<"YES"<<endl; //sorted
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
    
    ///*@CodingBoy100*/
   return 0;    
}
 
 