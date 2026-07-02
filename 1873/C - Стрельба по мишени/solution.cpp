#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int ans=0;
    int n=10;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char x;
            cin>>x;
 
 
            if(i==0 || i==n-1 || j==0 || j==n-1){
                if(x=='X')  ans+=1;
            } 
            else if((i==1 && j>0  && j<n-1 ) || (j==1 && i>0  && i<n-1) || (i==n-2 && j>0  && j<n-1 ) ||(j==n-2 && i>0  && i<n-1 )){
                 if(x=='X')  ans+=2;
            } 
 
            else if((i==2 && j>1  && j<n-2 ) || (j==2 && i>1  && i<n-2) || (i==n-3 && j>1  && j<n-2 ) ||(j==n-3 && i>1  && i<n-2 )){
                 if(x=='X')  ans+=3;
            } 
            else if((i==3 && j>2  && j<n-3 ) || (j==3 && i>2  && i<n-3) || (i==n-4 && j>2  && j<n-3 ) ||(j==n-4 && i>2  && i<n-3 )){
                 if(x=='X')  ans+=4;
            }     
            else if((i==4 && j>3  && j<n-4 ) || (j==4 && i>3  && i<n-4) || (i==n-5 && j>3  && j<n-4 ) ||(j==n-5 && i>3  && i<n-4 )){
                 if(x=='X')  ans+=5;
            } 
        }
    }
    cout<<ans<<endl;
 
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
 
 