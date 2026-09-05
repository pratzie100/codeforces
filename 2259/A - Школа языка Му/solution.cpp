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
#define rc(c) char c; cin >> c
#define rs(s) string s; cin >> s
#define rline(s) string s; getline(cin>>ws, s)
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
    ri(k);
    rs(s);
 
    unordered_map<int,int>mp;
    f(i,0,n){
        if(s[i]=='0'){
            mp[i/k]++;
        }
    }
 
    // int c=0;
 
    // each(x,mp){
    //     if(x>0) c++;
    // }
    pln( (n/k)- mp.size());
}  
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        auto start = chrono::high_resolution_clock::now();
    #endif
 
 
    tc{TESTCASE++; debug(TESTCASE); solve();}
    //solve();
    
    
    #ifndef ONLINE_JUDGE
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(stop-start);
        cerr << "Time taken (local): "
            << (long double)duration.count() / 1e6
            << " ms
";
    #endif
 
    //*@CodingBoy100*/ 
    return 0; 
}
 
 