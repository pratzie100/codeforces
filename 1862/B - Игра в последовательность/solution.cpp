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
   vector<int>b(n);
   vector<int>a;
   for(int i=0;i<n;i++){
        cin>>b[i];
        if(i==0){a.push_back(b[i]); continue;}
        if(b[i-1]>b[i]){a.push_back(1);}
        a.push_back(b[i]);
    } 
    int m=a.size();
    cout<<m<<endl;
    for(auto &i:a){
        cout<<i<<" ";
    }
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