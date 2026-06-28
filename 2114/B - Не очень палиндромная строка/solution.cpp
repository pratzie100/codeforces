#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
 
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // 0 6 -> 
    //1 1 -> 1 1
    //3 1 ->2 0
    // 6 4 -> 3 1
    // 6 4 -> 2 0
    //2 0  ->  2 0
 
//testcases
 
// 7
// 6 2
// 000000
// 2 1
// 01
// 4 1
// 1011
// 10 2
// 1101011001
// 10 1
// 1101011001
// 8 2
// 01010110
// 16 4
// 0000001111111111
   
    int ones=0;
    for(auto &i:s){
        if(i=='1') ones++;
    }
    int zeroes=n-ones;
 
    int totalpairs=n/2;
 
    int badpairs=n/2-k;  //since k is no. of good pairs
 
    ones-=badpairs; //each badpair("01") reduces count of ones by 1
    zeroes-=badpairs; //each badpair("01") reduces count of zeroes by 1
    // ones-=(n-2*k)/2;  
    // zeroes-=(n-2*k)/2;
 
    //now ones are remaining ones, zeroes are remaining zeroes (for good pairs only)
    if(ones<0) {cout<<"NO"<<endl;return;}
     if(zeroes<0) {cout<<"NO"<<endl;return;}
    
    int goodpairs=(ones/2)+(zeroes/2);
    //if((ones==2*k && zeroes==0) ||(ones==0 && zeroes==2*k)|| (k%2==0 && ones==k && zeroes==k)) cout<<"YES"<<endl;
    if(goodpairs==k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
 
   return 0;    
}
 
 