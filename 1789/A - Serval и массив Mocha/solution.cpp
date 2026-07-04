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
    // multiset<int>ms;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     ms.insert(x);
    // }
 
    // int first= *ms.begin();
    // int second= *(++ms.begin());
 
    // int g= __gcd(first,second);
    // if(g>2){
    //     cout<<"No"<<endl;
    // }
    // else{
    //     cout<<"Yes"<<endl;
    // }
    
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
 
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x=__gcd(nums[i],nums[j]);
            if(x==1 || x==2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;
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