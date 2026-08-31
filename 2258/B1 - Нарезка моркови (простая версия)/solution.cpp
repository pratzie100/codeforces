//---------------------------------------------------------------//
/**  @CodingBoy100  ~  Pratyush Kargeti  **/
//---------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL;  
const ll INF = (1LL<<60);
const ll M= 1000000000000000007LL; 
const ll MOD = 1000000007LL;
const ll MOD2 = 998244353LL;
const int N = 100005;
#ifdef LOCAL
#include "debug.hpp"        
#else
#define debug(...) 19
#endif
// #include "pbds.hpp"
using ull = unsigned long long;
#define endl "
"
#define pb push_back
#define tc int t; cin>>t; while(t--)
ll TESTCASE=0;
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define ri(x) int x; cin >> x
#define rll(x) ll x; cin >> x
#define rs(s) string s; cin >> s
#define rline(s) string s; getline(cin>>ws, s)
#define rc(c) char c; cin >> c
#define lb lower_bound
#define ub upper_bound
#define sp cout << ' '
#define ln cout << '
'
#define p(x) cout << x
#define pln(x) cout << x << '
'
#define pdln(x) cout<<fixed<<setprecision(10)<<(x)<<'
'
#define yn(cond) cout << ((cond) ? "YES
" : "NO
")
template<typename T> using vv = vector<vector<T>>;
// ll mygcd(ll a,ll b){return b?mygcd(b,a%b):a;}   //__gcd(a,b)
// ll mylcm(ll a, ll b) {return a/mygcd(a,b)*b;}
template<typename T> T gcd(T a, T b){ return std::gcd(a, b); }
template<typename T> T lcm(T a, T b){ return std::lcm(a, b); }
template<typename T> void read(T &x){ cin>>x; }
template<typename T> void read(vector<T>& v){ for(auto &x:v) read(x); }
template<typename T> void read(vector<vector<T>>& v){ for(auto &row:v) read(row); }
template<typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1,T2>& p){return os<<'('<<p.first<<", "<<p.second<<')';}
template<typename Container> void out(const Container& c){for(const auto &x : c) cout<<x<<' ';cout<<'
';}
template<typename T>  void out(const vv<T>& v){ for(const auto &row:v)  out(row);}
template<typename T> void uniq(vector<T>& v){sort(all(v)); v.erase(unique(all(v)),v.end());}
#define f(i,a,b) for(int i=(a); i<(b); i++)
#define fr(i,a,b) for(int i=(a); i>=(b); i--)
#define fx(i,a,b,x) for(int i=(a); i<(b); i+=(x))
#define frx(i,a,b,x) for(int i=(a); i>=(b); i-=(x))
#define each(x,v) for(auto &x : v)
using vll = vector<ll>;
using vs = vector<string>; 
using vc = vector<char>; 
using vi = vector<int>; 
//-------------------------///*@CodingBoy100*/------------------------/
 
 
 
void solve()
{      
    ri(n);
    ri(m);
 
    vi a(n);
    read(a);
    
 
 
    // each(x,a){
    //     if( (x&1) && x!=1) ans++;
    //     if( x%2==0) ans+=2;
    // }
 
    // pln(max(ans,n));
 
    // unordered_map<int,int>mp;
    // int maxi=-1;
    // each(x,a){
    //     maxi=max(maxi,++mp[x]);
    // }
 
    // debug(maxi);
    // bool f=0;
 
    // each(x,mp){
 
    //     if(x.second==maxi){
 
    //         if(x.first % 2==0){
    //             f=1;
    //         }
    //     }
    // }
 
    // debug(f);
    // int ans=0;
    // int k=0;
 
    // if(f){
    //     each(x,a){
    //         if(x==1) continue;
    //         if(x%2==0 && x>2){  
    //             ans+=2;
    //            // k+=2;
    //         }
    //         else{
    //             ans++;
    //             k++;
    //             if(x==2) k--; 
    //         }
    //     }
    //     debug(ans);
 
 
    //     pln(max({n,ans,mp[1]+2*mp[2]+k}));
    // }
    // else{
    //     pln(n);
    // }
 
 
 
 
 // unordered_map<int,int>mp;
 //    int maxi=-1;
 //    each(x,a){
 //        maxi=max(maxi,++mp[x]);
 //    }
 
 //    debug(maxi);
 //    bool f=0;
 //    int t=-1212;
 //    each(x,mp){
 
 //        if(x.second==maxi){
 
 //            if(x.first % 2==0){
 //                f=1;
 //                t= x.first / 2;
 //            }
 //        }
 //    }
 
 //    debug(f);
 //    int ans=0;
 //    int k=0;
 
 //    if(f){
 //        each(x,a){
 //            if( (2*t) == x){
 //                ans+=2;
 //            }
 //            else if( x>= t ){
 //                if()
 //                ans++;
 
 //            } 
 //        }
 //        pln(max(n,ans));
 //    }
 //    else{
 //        pln(n);
 //    }
 
 
 
 
 
 
 // unordered_map<int,int>mp;
 //    int maxi=-1;
 //    each(x,a){
 //        maxi=max(maxi,++mp[x]);
 //    }
 
 //    debug(maxi);
 //    bool f=0;
 //    int t=-1212;
 //    each(x,mp){
 
 //        if(x.second==maxi){
 
 //            if(x.first % 2==0){
 //                f=1;
 //                t= x.first / 2;
 //            }
 //            else{
 //                t=x.first;
 //            }
 //        }
 //    }
 
 //    debug(f);
 //    int ans=0;
 //    int k=0;
 
 //    if(f){
 //        each(x,a){
 //            if(t!=1 && (2*t) == x  ){
 //                ans+=2;
 //            }
 //            else if( x>= t ){
            
 //                ans++;
 
 //            } 
 //        }
 //        pln(max(n,ans));
 //    }
 //    else{
 //        each(x,a){
 //            if( (2*t) == x){
 //                ans+=2;
 //            }
 //            else if( x>= t ){
 //                ans++;
 
 //            } 
 //        }
 //        pln(max(n,ans)); 
 //    }
 
 
 
    // int posl=1;
 
    // int maxi=0;
 
 
 
    // f(i, 1,m+1){
    //     int ans=0;
    //     f(j,0,n){
    //         if(a[j]==2*i){
    //             ans+=2;
    //         }
    //         else if(a[j]>=i) ans++;
    //     }
 
    //     maxi=max(maxi,ans);
    // }
    // pln(maxi);
 
 
 
 
 
 
 
    int posl=1;
 
    unordered_map<int,int>mp;
 
    each(x,a){
        mp[x]++;
    }
 
    sort(all(a));
 
    int maxi=0;
    int ans=0;
    f(x,1,m+1){
        int ind= lower_bound(all(a),x) -  begin(a);
 
        ans=  (n-ind)  + mp [2*x];
        maxi=max(maxi,ans);
    }
 
    // f(i, 1,m+1){    
    //     int ans=0;
    //     f(j,0,n){
    //         if(a[j]==2*i){
    //             ans+=2;
    //         }
    //         else if(a[j]>=i) ans++;
    //     }
 
    //     maxi=max(maxi,ans);
    // }
    pln(maxi);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}  
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    tc{TESTCASE++; debug(TESTCASE); solve();}
 
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
} 