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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    auto it=min_element(begin(a),end(a));
    int w=*it;
    vector<int>b;
    vector<int>c;
    for(auto &i:a){
        if(i==w){
            b.push_back(i);
        }
        else{
            c.push_back(i);
        }
    }
    int lb=b.size();
    int lc=c.size();
    if(lb==0 || lc==0)  {cout<<-1<<endl; return;}
    cout<<lb<<" "<<lc<<endl;
    for(auto &i:b) cout<<i<<" ";
    cout<<endl;
    for(auto &i:c) cout<<i<<" ";
    cout<<endl;
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