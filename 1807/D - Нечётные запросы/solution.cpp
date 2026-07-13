//------------------------------------------------------------------///*@CodingBoy100*/
#include <bits/stdc++.h>
using namespace std;
 
// #define debug(x) cout<<#x<<" = "<<x<<"
";
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '
'
#else
#define debug(x)
#endif
 
using ll = long long;
#define endl "
"
#define F first
#define S second
#define pb push_back
#define tc int t; cin>>t; while(t--)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define ri(x) int x; cin >> x
#define rll(x) ll x; cin >> x
#define rs(s) string s; cin >> s
#define rc(c) char c; cin >> c
#define rd(x) double x; cin >> x
#define sz(x) ((int)(x).size())
#define lb lower_bound
#define ub upper_bound
 
#define p(x) cout << x
#define sp cout << ' '
#define pln(x) cout << x << '
'
#define ln cout << '
'
#define yes cout<<"YES"
#define no cout<<"NO"
#define yesln cout<<"YES
"
#define noln cout<<"NO
"
#define yn(cond) cout << ((cond) ? "YES
" : "NO
")
 
#define f(i,a,b) for(int i=(a); i<(b); i++)
#define fr(i,a,b) for(int i=(a); i>=(b); i--)
#define fx(i,a,b,x) for(int i=(a); i<(b); i+=(x))
#define frx(i,a,b,x) for(int i=(a); i>=(b); i-=(x))
#define fit(it,c) for(auto it=(c).begin(); it!=(c).end(); it++)
#define frit(it,c) for(auto it=(c).rbegin(); it!=(c).rend(); it++)
#define each(x,v) for(auto &x : v)
 
using vi = vector<int>;
using vc = vector<char>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;
template<typename T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<typename T> using st = stack<T>;
template<typename T> using q = queue<T>;
template<typename T> using dq = deque<T>;
template<typename T> using us = unordered_set<T>;
template<typename K, typename V> using um = unordered_map<K,V>;
template<typename T1, typename T2> using vp = vector<pair<T1,T2>>;
 
template<typename T> void rev(T& c){ reverse(all(c)); }
template<typename T> void srt(T& c){ sort(all(c)); }
template<typename T> void rsrt(T& c){ sort(rall(c)); }
template<typename T>  long long accum(const vector<T>& v){ return accumulate(all(v), 0LL); }
template<typename T> T maxele(const vector<T>& v){ return *max_element(all(v)); }
template<typename T> T minele(const vector<T>& v){ return *min_element(all(v)); }
template<typename T> void uniq(vector<T>& v){ srt(v); v.erase(unique(all(v)), v.end()); }
 
ll mygcd(ll a,ll b){return b?mygcd(b,a%b):a;}   //__gcd(a,b)
ll mylcm(ll a, ll b) {return a/mygcd(a,b)*b;}
// template<typename T> T gcd(T a, T b){ return std::gcd(a, b); }
// template<typename T> T lcm(T a, T b){ return std::lcm(a, b); }
 
template<typename T>bool chmax(T &a,const T &b){ if(b>a){ a=b; return true; } return false; }
template<typename T>bool chmin(T &a,const T &b){ if(b<a){ a=b; return true; } return false; }
 
template<typename T> bool inside(T x,T y,T n,T m){ return x>=0 && x<n && y>=0 && y<m;}
 
template<typename T>
void read(T &x){
    cin>>x;
}
template<typename T>
void read(vector<T>& v){
    for(auto &x:v)
        read(x);
}
template<typename T>
void read(vector<vector<T>>& v){
    for(auto &row:v)
        read(row);
}
// template<typename T1, typename T2>
// void out(const vp<T1,T2>& v){
//     for(const auto &[a,b] : v)
//         cout << a << ' ' << b << '
';
// }
template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1,T2>& p){
    return os << '(' << p.first << ", " << p.second << ')';
}
template<typename Container>
void out(const Container& c){
    for(const auto &x : c)
        cout << x << ' ';
    cout << '
';
}
 template<typename T>
void out(const vector<vector<T>>& v){
    for(const auto &row:v)
        out(row);
}
 
//------------------------------------------------------------------///*@CodingBoy100*/
 
//#define mod  1000000000000000007LL;  
// const ll mod2= 1000000000000000007LL;  
const ll INF = (1LL<<60);
const ll M= 1000000000000000007LL; 
const ll MOD = 1000000007LL;
const ll MOD2 = 998244353LL;
 
 
void solve()
{
    ri(n); ri(q);
 
 
 
    vll pref(n);
 
    cin>>pref[0];
 
    
    f(i,1,n){
        ri(x);
 
        pref[i]=x+pref[i-1];
    }
 
    //out(pref);
 
    while(q--){
        ri(l); ri(r); ri(k);
 
        ll rangesum;
        if(l-2 < 0){
             rangesum=pref[r-1];   
        }
        else{
            rangesum=pref[r-1]- pref[l-2];
        }
        
        ll leftsum= pref[r-1] - rangesum;
 
        ll rightsum= pref[n-1]- pref[r-1];
 
        debug(rangesum);
        debug(leftsum);
        debug(rightsum);
 
 
        // we want to make  leftsum + (r-l+1)*k + rightsum =odd
 
        // if leftsum+rightsum are odd, then mid must be even (or not odd); since only o+e=o
 
        // if leftsum+rightsum are even, then mid must be odd ,   since only e+o=o;
 
            if( (leftsum%2!=0 && rightsum%2==0) || (leftsum%2==0 && rightsum%2!=0) ) {
 
                if( !((r-l+1)%2!=0 &&  k%2!=0) ){
                    yesln;
                }
                else{
                    noln;
                }
            
            }  
            else if( !((leftsum%2!=0 && rightsum%2==0) || (leftsum%2==0 && rightsum%2!=0)) ){
 
                if( ((r-l+1)%2!=0 &&  k%2!=0) ){
                    yesln;
                }
                else{
                    noln;
                }
            }
            else{
                noln;
            }
 
    }
 
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    tc{solve();}
 
    //solve();
    
    ///*@CodingBoy100*/
   return 0;    
}