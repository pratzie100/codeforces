#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
 
    //   1 2 9  //  2 2 9 // 2 1 9
    // 1 2 8  //  2 2 8  // 3 2 8
    
    //optimal move is utilizing c buttons as quickly asap
    //anna get c-c/2   and katie get c/2
    //if c is odd, anna presses last c button 
    //if c is even, katie presses last c button
    // whomsoever will start pressing remaining a+b buttons will be at disadvantage
    //only way that person is winning will be if she has more buttons than her opponent
    //winning case for anna 2 2 9 , 2 1 9, 3 2 8
    //winning case for katie 1 2 9, 1 2 8, 2 2 8
    if(c&1){
       // katie at disadvantage 
        if(b>a) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    else{
        //anna at disadvantage
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;    
    }
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