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
const int N=100;
const int INF=0x3f3f3f3f;
int n,m,x,y,w,dis[N][N],deg[N],dp[(1<<20)];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "r", stdin);
#endif
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        for(int i=0; i<=n+5; ++i){
            deg[i]=0;
            for(int j=0; j<=n+5; ++j) dis[i][j]=INF;
        }
        int sum=0;
        for(int i=0; i<m; ++i){
            cin>>x>>y>>w;
            uin(dis[x][y],w);
            uin(dis[y][x],w);
            ++deg[x]; ++deg[y];
            sum+=w;
        }
        for(int k=1; k<=n; ++k) for(int i=1; i<=n; ++i) for(int j=1; j<=n; ++j) uin(dis[i][j],dis[i][k]+dis[k][j]);
        bool pre=false;
        for(int i=2; i<=n; ++i){
            if(deg[i]>0 && dis[i][1]==INF){ //条件一定有deg[i]>0,因为这题要求的是经过所有边,不是所有点。
                cout<<-1<<'\n';
                pre=true;
                break;
            }
        }
        if(pre) continue;
        int now=0;
        for(int i=1; i<=n; ++i) if(deg[i]&1) now|=(1<<(i-1));
        for(int i=0; i<now+10; ++i) dp[i]=INF;
        dp[now]=0;
        int ans=INT_MAX;
        for(int i=now; i>0; --i){
            for(int j=1; j<=n; ++j){
                if(i&(1<<(j-1))){
                    for(int k=j+1; k<=n; ++k){
                        if(i&(1<<(k-1))){
                            uin(dp[i^(1<<(j-1))^(1<<(k-1))],dp[i]+dis[j][k]);
                        }
                    }
                }
            }
        }
        cout<<sum+dp[0]<<'\n';
    }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}
