#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    //TLE
    // int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // } 
 
    // set<int>s;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         auto it=max_element(begin(arr)+i,begin(arr)+j+1);
    //         s.insert(*it);
    //     }
    // }
    // auto it=s.begin();
    // cout<<(*it)-1<<endl;
 
 
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
 
    set<int>s;
    for(int i=0;i<n-1;i++){
        int z= max(arr[i],arr[i+1]);        
        s.insert(z);
            //auto it=max_element(begin(arr)+i,begin(arr)+j+1);
            //s.insert(*it);
        
    }
    auto it=s.begin();
    cout<<(*it)-1<<endl;
 
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
 
 