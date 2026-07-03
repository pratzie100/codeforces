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
    vector<int>count2l(n,0);
    vector<int>count2r(n,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
   // pre[0]=arr[0];
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2) c++;
        count2l[i]=c;
    }
   // suf[n-1]=arr[n-1];
 
    int d=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==2) d++;
 
        count2r[i]=d;
    }
    for(int i=0;i<n-1;i++){
        if(count2l[i]==count2r[i+1]){
            cout<<i+1<<endl;
            return;
        }
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
 
 
  
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}