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
 
 
    bool sorted = true;
    int t=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<t){
            sorted=false;
            //break;  ALLOW TO TAKE INPUT DONT BREAK IN BTW
        }
        t=x;
    }
    if(k>=2) { //worst bubble sort kind of can be used
        cout<<"YES"<<endl;
        return;
    }
    else{
        if(sorted)cout<<"YES"<<endl; //sorted
        else cout<<"NO"<<endl;
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
 