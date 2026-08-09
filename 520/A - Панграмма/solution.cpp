//---------------------------------------------------------------//
/** 
    @CodingBoy100
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
    rs(s);
    unordered_set<char>st;
    each(x,s){
        char ch= x | ' ';
 
        st.insert(ch);
    }
    yn(st.size()==26);
 
}  
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    //tc{TESTCASE++; debug(TESTCASE); solve();}
 
    solve();
    
    ///*@CodingBoy100*/
   return 0;    
}