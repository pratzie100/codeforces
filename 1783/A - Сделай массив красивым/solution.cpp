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
        
    ll sum=0;
    auto it=--end(arr); //arr is already sorted
 
    // for(int i=0;i<n;i++){
    //     if(i==0){
    //         sum+=arr[i];
    //         continue;
    //     }
 
    //     if(arr[i]==sum){
 
    //         sum+=arr[i];
    //         if(i==1){ //if duplicates occur in beginning,swap with max element
    //             swap(arr[i],*it);
    //             it--;
    //             continue;
    //         }
 
    //         // if(arr[i]==*it){
    //         //     int z= lower_bound(begin(arr),end(arr),*it)- begin(arr);
 
    //         //     swap(arr[i],arr[z]);
    //         //     z--;
                
    //         //     continue;
    //         // }
    //         swap(arr[i],arr[i-1]);
    //         //it--;
    //         continue;
    //     } 
    //     sum+=arr[i];  
    // }
    // sum=0;
 
    // for(int i=0;i<n;i++){
    //     if(i==0){
    //         sum+=arr[i];
    //         continue;
    //     }
    //     if(arr[i]==sum){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    //     sum+=arr[i];
    // }
 
 
 
    //think constructively
 
    //array is sorted
    //only impossible case, if only one distinct element in array like 9 9 9
    //otherwise, just paste maximum element at index 0, like  9 3 3 
    // but duplicate case like 9 9 3... then swap second element with smallest elem
    // like 9 3 9
 
    if(arr[0]==*it) {cout<<"NO"<<endl; return;}
 
    cout<<"YES"<<endl;
    swap(arr[0],*rbegin(arr));  // after this step, smallest element at the end, i.e, rbegin
    swap(arr[1],*rbegin(arr)); // nice trick
    for(auto &i:arr){
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