#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int n,x;
    cin>>n>>x;
    int diff=INT_MIN;
    int prev=0;
    int last=-1;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
 
        diff=max(diff, p-prev);
        prev=p;
        if(i==n-1){
            last=p;
        }   
    }
    int r=2*(x-last);
    cout<< max(diff,r)<<endl;
 
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
 
 