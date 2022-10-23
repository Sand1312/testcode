#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define int long long
//#define endl "\n"
const int mod = 1000000000;
const int MIN = mod;
const int MAX = -1;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin.exceptions(ios::badbit | ios::failbit);
    string s;cin>>s;
    vector <pair <int,int>> dp;
    for (int i=0;i<s.length()/2+1;i++) {
        int k{};
        if (s.substr(0,i+1)==s.substr(s.length()-1-i,i+1)) k=1;
        else k=0;
        int cnt{};
        string temp=s.substr(0,i+1);
        if (k==1) {
            for (int j=i+1;j<s.length()-1;j+=temp.length()){
                if (s.substr(j,temp.length())==temp) cnt++;
            }
        }
        dp.push_back({k,cnt+2});
    }
    int q;cin>>q;
    while (q--){
        int tt;cin>>tt;
        if (dp[tt-1].first==1) {
            cout <<"YES "<<dp[tt-1].second<<'\n';
        }
        else cout << "NO\n";
    }
}
