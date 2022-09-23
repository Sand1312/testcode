#include <iostream>
#include "algorithm"
#include "math.h"
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    int a[500005]{};
    for (int i=0;i<n;i++) cin>>a[i];
    int ans{};
    while (m>0) {
        int index{},max{a[0]},mm{-99};
        for (int i=1;i<n;i++) if (a[i]>max) {
            max=a[i];
            index=i;
        }
        for (int i=0;i<n;i++) if (a[i]>=mm&&i!=index) mm=a[i];
            if (max==0) break;
            int tmp{};
            if (mm!=0) tmp=log(max/mm)/log(2);
            else tmp=log(max)/log(2);
            if (m<tmp) tmp=m;
            m-=tmp;
            if (tmp==0) {
                ans+=a[index];
                a[index]/=2;
                m--;
            }
            for (int j=0;j<tmp;j++) {
                ans += a[index];
                a[index] /= 2;
            }
}
    cout<<ans;
}
