#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e5+5;

int a[N];
int f[N];
int n;

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d",&a[i]);
        }
        ll sum=0;
        for(int i=n;i>=1;i--) {
            if(i+a[i]>n) f[i]=1;
            else f[i]=f[i+a[i]]+1;
            sum+=f[i];
        }
        if(sum-(sum/n)*n<=(sum/n+1)*n-sum) {
            printf("%lld\n",sum/n);
        }else printf("%lld\n",sum/n+1);
    }
    return 0;
}
