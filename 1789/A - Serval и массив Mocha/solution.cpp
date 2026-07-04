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
        //best case is not taking gcd of two smallest elements! as above (wrong)
 
 
 
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
 
//1 sec= 10^8 operations
//  operations/testcase =  10^8 / 500  = 0.2 * 10^6 = 2*10^5 ops allowed per test case
//  N^3 solution per test case wont work since N=100  and N^3=10^6 > 2*10^5
// N^2 = 10^4  < 2*10^5 so this will work...any thing else than N^2 time complexity also work
 
// Time Complexity (TC): O(n^2 * log2(min(a[i], a[j]))) = O(10^4 * 20) = O(2 * 10^5)
    //since a[i]<=10^6 [ log2(10^6)=20 ]
 
// Space Complexity (SC): O(n) = O(100)
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