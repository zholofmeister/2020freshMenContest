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
int tc,n,a11,a22,a33,b11,b22,b33;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "r", stdin);
#endif
    cin>>tc;
    while(tc--){
        cin>>n;
        cin>>a11>>a22>>a33;
        cin>>b11>>b22>>b33;
        vector< pair<int,int> > cnt;
        cnt.eb(mp(1,1));
        cnt.eb(mp(1,3));
        cnt.eb(mp(2,1));
        cnt.eb(mp(2,2));
        cnt.eb(mp(3,2));
        cnt.eb(mp(3,3));
        int ans=0;
        do {
            int na1=a11,na2=a22,na3=a33,nb1=b11,nb2=b22,nb3=b33,res=0;
            for(auto it:cnt){
                int temp;
                if(it.fi==1 && it.se==1){
                    temp=min(na1,nb1);
                    res+=temp;
                    na1-=temp;
                    nb1-=temp;
                } else if(it.fi==1 && it.se==3){
                    temp=min(na1,nb3);
                    res+=temp;
                    na1-=temp;
                    nb3-=temp;
                } else if(it.fi==2 && it.se==1){
                    temp=min(na2,nb1);
                    res+=temp;
                    na2-=temp;
                    nb1-=temp;
                } else if(it.fi==2 && it.se==2){
                    temp=min(na2,nb2);
                    res+=temp;
                    na2-=temp;
                    nb2-=temp;
                } else if(it.fi==3 && it.se==2){
                    temp=min(na3,nb2);
                    res+=temp;
                    na3-=temp;
                    nb2-=temp;
                } else if(it.fi==3 && it.se==3){
                    temp=min(na3,nb3);
                    res+=temp;
                    na3-=temp;
                    nb3-=temp;
                }
            }
            uax(ans,res);
        }while(next_permutation(all(cnt)));
        cout<<n-ans<<'\n';
    }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}
