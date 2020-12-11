#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, a, b) for (int i = (int)(a); i >= (int)b; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define rep(i, l, r) for (int i = (l); i <= (r); i++)
#define per(i, r, l) for (int i = (r); i >= (l); i--)
#define ms(x, y) memset(x, y, sizeof(x))
#define SZ(x) int(x.size())
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }
//1.integer overflow (1e5 * 1e5) (2e9 + 2e9)
//2.runtime error
//3.boundary condition
const int N=110;
int dp[N][N],tc,x,y;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    cin>>tc;
    while(tc--){
        cin>>x>>y;
        if(x%3==0){
            if(y%3==0) cout<<"nianqingrenbujiangwude"<<'\n';
            else cout<<"xiexiepengyoumen"<<'\n';
        } else if(x%3==1){
            if(y%3==1) cout<<"nianqingrenbujiangwude"<<'\n';
            else cout<<"xiexiepengyoumen"<<'\n';
        } else if(x%3==2){
            if(y%3==2) cout<<"nianqingrenbujiangwude"<<'\n';
            else cout<<"xiexiepengyoumen"<<'\n';
        }
    }
//    for(int i=0; i<=20; ++i){  //打表找规律
//        for(int j=0; j<=20; ++j){
//            if(i==0 && j==0) continue;
//            bool findlose=false;
//            if(!dp[i-1][j] && i-1>=0) findlose=true;
//            if(!dp[i][j-1] && j-1>=0) findlose=true;
//            if(!dp[i-2][j] && i-2>=0) findlose=true;
//            if(!dp[i][j-2] && j-2>=0) findlose=true;
//            if(findlose) dp[i][j]=1;
//        }
//    }
//    for(int i=0; i<=20; ++i){
//        for(int j=0; j<=20; ++j){
//            cout<<dp[i][j]<<' ';
//        } cout<<'\n';
//    }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}
