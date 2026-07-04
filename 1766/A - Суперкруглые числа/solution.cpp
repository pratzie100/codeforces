#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
const ll N=1000003;
vector<ll>countr(N+1);
void compute_rounds()
{
  // vector<ll>v;
    countr[1]=1;
   for(int i=2; i<=999999;i++){
 
        int num=i;
        int c=0;
        while(num){
            if((num%10) != 0) c++;
            //c++;
            num/=10;
        }
       // if(c==1){
            countr[i]=countr[i-1]+ (c==1);
        //}
   }
  // return v;
}
 
void solve()
{
    int n;
    cin>>n;
    cout<<countr[n]<<endl;  //O(1) PER QUERY
 
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    compute_rounds();  // TIME COMPLEXITY OF PRECOMPUTATION- N LOG N  (log is base 10)
    // 10^6 * log 10^6  = 6 * 10^6 = 10^6  (almost linear)
 
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