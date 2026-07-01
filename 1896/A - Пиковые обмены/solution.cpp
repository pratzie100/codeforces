#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    //3 4 2 1 ->  3 2 1 4 (NO) 
    //1 2 3 5 6 4 -> 1 2 3 4 5 6
    // first element should be 1, rest will be handled automatically
    int n;
    cin>>n;
    int w;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0) w=x;
    }
    if(w==1){ cout<<"YES"<<endl;}
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
 
 