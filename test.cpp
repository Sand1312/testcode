#include <iostream>
#include "algorithm"
#include "vector"
using namespace std;
vector <int> b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    int a[500005]{};
    for (int i=0;i<n;i++) {
        cin>>a[i];
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    for (int j=1;j<=log(b[n-1])/log(2)+1;j++) {
        for (int i = 0; i < n; i++) {
            a[i]/=2;
            b.push_back(a[i]);
        }
    }
    int ans{};
    sort(b.begin(),b.end());
    for (int i=b.size()-1;i>=0;i--) {
        if (m>0) {
            ans+=b[i];
            m--;
        }
        else break;
    }
    cout<<ans;
}
