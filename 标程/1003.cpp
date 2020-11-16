#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=2e4+5;

int h[N];
int n;

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d",&h[i]);
        }
        int q;
        scanf("%d",&q);
        while(q--) {
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",h[y]*h[y]-h[x]*h[x]);
        }
    }
    return 0;
}
