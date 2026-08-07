//---------------------------------------------------------------//
/** 
   author : @CodingBoy100
**/
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
#define debug(...) 71
#endif
 
// #include "pbds.hpp"
// #include "num_theo.hpp"
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
#define p(x) cout << x
#define sp cout << ' '
#define pln(x) cout << x << '
'
#define ln cout << '
'
#define yn(cond) cout << ((cond) ? "YES
" : "NO
")
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;
template<typename T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<typename T> void rev(T& c){ reverse(all(c)); }
template<typename T> void srt(T& c){ sort(all(c)); }
template<typename T> void rsrt(T& c){ sort(rall(c)); }
template<typename T>  long long accum(const vector<T>& v){ return accumulate(all(v), 0LL); }
template<typename T> T maxele(const vector<T>& v){ return *max_element(all(v)); }
template<typename T> T minele(const vector<T>& v){ return *min_element(all(v)); }
template<typename T> void uniq(vector<T>& v){ srt(v); v.erase(unique(all(v)), v.end()); }
template<typename T> vector<T> pref(const vector<T>& v){
    vector<T> pre(v.size()); partial_sum(all(v), pre.begin()); return pre; }
template<typename T> vector<T> suff(const vector<T>& v){
    vector<T> suf(v.size()); partial_sum(rall(v), suf.rbegin()); return suf; }
// ll mygcd(ll a,ll b){return b?mygcd(b,a%b):a;}   //__gcd(a,b)
// ll mylcm(ll a, ll b) {return a/mygcd(a,b)*b;}
template<typename T> T gcd(T a, T b){ return std::gcd(a, b); }
template<typename T> T lcm(T a, T b){ return std::lcm(a, b); }
template<typename T> bool inside1d(T x,T n){ return x>=0 && x<n;}
template<typename T> bool inside2d(T x,T y,T n,T m){ return x>=0 && x<n && y>=0 && y<m;}
template<typename T> void read(T &x){ cin>>x; }
template<typename T> void read(vector<T>& v){ for(auto &x:v) read(x); }
template<typename T> void read(vector<vector<T>>& v){ for(auto &row:v) read(row); }
template<typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1,T2>& p){
    return os << '(' << p.first << ", " << p.second << ')'; }
template<typename Container> void out(const Container& c){ for(const auto &x : c) cout << x << ' '; cout << '
'; }
template<typename T>  void out(const vv<T>& v){ for(const auto &row:v)  out(row);}
#define f(i,a,b) for(int i=(a); i<(b); i++)
#define fr(i,a,b) for(int i=(a); i>=(b); i--)
#define fx(i,a,b,x) for(int i=(a); i<(b); i+=(x))
#define frx(i,a,b,x) for(int i=(a); i>=(b); i-=(x))
#define each(x,v) for(auto &x : v)
using vi = vector<int>;
using vs = vector<string>;
using vc = vector<char>;
using vll = vector<ll>;
 
//-------------------------///*@CodingBoy100*/------------------------/
 
void solve()
{
   ri(n);
 
   vi a(n);
   read(a);
 
   unordered_map<int,int>m;
 
   each(x,a){
      m[x]++;
   }
 
   int maxcnt=0;
 
   int maxi=-1;
   each(x,m){
      if(x.second> maxcnt){
          maxcnt=x.second;
          maxi=x.first;
      }
      // else{
      //    rems+=(1ll * x.first * x.second);
      // }
   }
 
   ll rems=0;
   each(x,m){
      if(x.first!=maxi){
         rems+=(1ll * x.first * x.second);
      }
   }
 
   int rem=  n-maxcnt;
 
   int usemaxele= min(maxcnt, rem+2);
 
   pln( (1ll * usemaxele* maxi) + rems );
 
   // ll t=accum(a);
   // if(m.size()==n){
   //    pln(t);
   //    return;
   // }
   // ll ans=t;
   // each(x,m){
 
   //    if(x.second>=2){
   //       ans = max(ans, t - (m[x.first]-2)*x.first);
   //    }
   // }
   // pln(ans);
 
 
 
 
   // vi cnt;
   // each(x,m){
   //    cnt.pb(x.second);
   // }
   // srt(cnt);
 
 
 
   // int larg=cnt[cnt.size()-1];
   
 
 
 
   // int seclarg=  (cnt.size()!=1) ? cnt[cnt.size()-2] : 0;
 
   // int diff= larg-seclarg-2;
   // if(diff<=0){
   //    pln(ans);
   //    return;
   // }
   // int rem=0;
   // each(x,m){
   //    if(x.second==larg){
 
   //       rem=x.first;
   //    }
   // }
   // pln( ans- (1ll * diff * rem));
 
}  
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    tc{TESTCASE++; debug(TESTCASE); solve();}
 
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}