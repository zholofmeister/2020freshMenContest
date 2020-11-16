#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e3+5;

int x[N],y[N];
int _x[N*3],_y[N*3],cnt;

ll cal(int x1,int y1,int x2,int y2) {
    ll tmpx=(x1-x2),tmpy=(y1-y2);
    return tmpx*tmpx+tmpy*tmpy;
}

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        int n;
        cnt=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d%d",&x[i],&y[i]);
            x[i]*=2,y[i]*=2;
            _x[++cnt]=x[i]-2,_y[cnt]=y[i];
            _x[++cnt]=x[i],_y[cnt]=y[i]-2;
            _x[++cnt]=x[i]-1,_y[cnt]=y[i]-1;
        }
        int ans=0;
        for(int i=1;i<=cnt;i++) {
            int sum=0;
            for(int j=1;j<=n;j++) {
                if(cal(_x[i],_y[i],x[j],y[j])<=4) sum++;
            }
            ans=max(ans,sum);
        }
        printf("%d\n",ans);
    }
    return 0;
}
