#include <iostream>
#include "algorithm"
#include "math.h"
using namespace std;
int a[10000000]{};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for (int j=1;j<=log(a[n-1])/log(2)+1;j++) {
        for (int i = 0; i < n; i++) {
            a[i + j * n] = a[i + (j - 1) * n] / 2;
        }
    }
    long long ans{};
    int tmp=n*(log(a[n-1])/log(2)+1);
    sort(a,a+tmp);
    for (int i=tmp-1;i>=0;i--) {
        if (m>0) {
            ans+=a[i];
            m--;
        }
        else break;
    }
    cout<<ans;
}
