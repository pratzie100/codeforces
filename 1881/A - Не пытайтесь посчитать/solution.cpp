#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    auto pos=x.find(s);
    if(pos!=string::npos){
        cout<<0<<endl;
        return;
    }
 
int i=0;
 
    while(1)
    {x+=x;
    i++;
    auto pos=x.find(s);
    if(pos!=string::npos){
        cout<<i<<endl;
        return;
    }
    if(i==5) break;
 
}
cout<<-1<<endl;
 
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
 
 