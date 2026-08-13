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
#define debug(...) 64
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
#define rc(c) char c; cin >> c
#define lb lower_bound
#define ub upper_bound
#define sp cout << ' '
#define ln cout << '
'
#define p(x) cout << x
#define pln(x) cout << x << '
'
#define pdln(x) cout<<fixed<<setprecision(15)<<(x)<<'
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
template<typename T> void uniq(vector<T>& v){srt(v); v.erase(unique(all(v)),v.end());}
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
    ri(l);
 
    vi a(n);
    read(a);
 
    sort(all(a));
    int diff=0;
    f(i,0,n-1){
        diff=max(diff, a[i+1]-a[i]);
    }
    double c1= diff / (2 * 1.0);
    double c2= a[0]*1.0; // boundary check a[0]- 0
    double c3= (l-a[n-1])*1.0; // boundary check l - a[n-1]
 
    double ans=max({c1,c2,c3});
 
    pdln(ans); 
 
 
 
 
 
 
 
 
 
 
    // if(a[0]==0){
 
    //     int diff= 0;
 
    //     f(i,0,n-1){
    //         diff=max(diff, a[i+1]-a[i]);
    //     }
    //     pln(diff / (2 * 1.0));
    // }
    // else{
    //     int diff=a[0];
    //     f(i,0,n-1){
    //         diff=max(diff, a[i+1]-a[i]);
    //     }
    //     // if(diff==a[0]){
    //     //     pln(a[0]);
    //     //     return;
    //     // }
    //     // else{
    //     double c1= 
    //         pln(max(a[0]*1.0,diff / (2 * 1.0)));  
    //     //}
              
    // }
 
}  
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    //tc{TESTCASE++; debug(TESTCASE); solve();}
 
    solve();
    
    ///*@CodingBoy100*/
   return 0;    
}