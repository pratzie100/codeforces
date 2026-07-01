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
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
//TLE
    // map<pair<int,int>, int>m;
    // for(int i=0;i<n;i++){
    //     set<int>s;
    //     for(int j=i;j<n;j++){
    //         s.insert(arr[j]);
    //         m.insert({{i,j},s.size()});
    //     }
 
    // }
    // int  p=INT_MIN;
    // int L=INT_MIN;
    // int R=INT_MIN;
    // for(auto &i:m){
    //     int tomaximise=i.first.second-i.first.first-i.second;
    //     if(tomaximise>p){
    //         L=i.first.first;
    //         R=i.first.second;
    //     }
    //     p=max(p,tomaximise);
    // }
    // cout<<L+1<<" "<<R+1<<endl;
 
//~~~~~~~~
 
    //let valid window be [l, r] and we expand it to the 
    //right by adding element arr[r+1] (step by step increment analaysis of given formula)
    //Case 1 (New element): 
    // (r-l+1)-(c(l,r)+1) = r-l-c(l,r) i.e, 
    //(The value stays exactly the same)
    
    //Case 2 (Duplicate element): 
    // (r-l+1)-(c(l,r)+0) = [r-l-c(l,r)]+1
    //(The value increases by 1)
    
    //Expanding interval never makes answer worse
    //It either keeps the value same or makes it strictly better.
    //Therefore, the largest possible interval will always yield 
    //the maximum possible value.
    
    // The entire array is always an optimal choice
    cout<<1<<" "<<n<<endl;
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
 