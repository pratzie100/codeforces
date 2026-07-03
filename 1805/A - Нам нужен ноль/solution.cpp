#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    //two same operands in xor, cancel each other , i.i., x xor x = 0
    //if same operands are in odd number, one operand will be left
    // (x xor x )xor x = 0 xor x = x
 
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        ans^=d;
    }
    if(n%2==0){ //then x occur even times, all x cancel, final epressn= xors of all elements
        if(ans!=0){cout<<-1<<endl;}
        else{
            cout<<2<<endl; //can print any 0<=integer<256
        }
    }
    else{ // final epressn= ( xors of all elements )  xor  x    
        for(int x=0;x<256;x++){
            if((ans^x)==0){
                cout<<x<<endl;
                return;
            }
        }   
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