#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl "
"
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL; 
 
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        int z=n;
        while(z--){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        if(k==1){cout<<"No"<<endl;}
        else if(k==2){
            if(n%k==0){
                cout<<"Yes"<<endl;
                cout<<n/2<<endl;
                int s=n/2;
                while(s--){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
 
            else{
                cout<<"No"<<endl;
            }
        }
        else{//u have 2 and 3
 
            if(n%2==0){
                cout<<"Yes"<<endl;
                cout<<n/2<<endl;
                int c=n/2;
                while(c--){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"Yes"<<endl;
                int p=n-3;
                int d=p/2;
                cout<<d+1<<endl;
                while(d--){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
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