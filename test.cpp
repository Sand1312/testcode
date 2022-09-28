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
// #include <iostream>
// #include <vector>
// using namespace std;
// const int mod=1e9+7;
// class So_nguyen_duong{
// private:
//     int giatri;
// public:
//     void nhapGiatri(){
//         cin>>giatri;
//     }
//     void xuatGiatri(){
//         cout<<giatri;
//     }
//     int giaithua(vector <long long> *v){
//         return (v->operator[](giatri));
//     }
// };
// signed main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
// //    freopen("input.txt", "r", stdin);
// //    freopen("output.txt", "w", stdout);
//     long long res{};
//     vector <long long> *v = new vector<long long>;
//     v->push_back(1);
//         for (int i=1;i<mod-6;i++) {
//             v->push_back(v->operator[](i-1)*i);
//             v->operator[](i)%=mod;
//         }
//     cout<<"Nhap n: ";
//     int n;cin>>n;
//     So_nguyen_duong *oj1= new So_nguyen_duong[n];
//     for (int i=0;i<n;i++){
//         cout<<"nhap vao gia tri thu "<<i+1<<": ";
//         (oj1+i)->nhapGiatri();
//         res+=(oj1+i)->giaithua(v);
//         res%=mod;
//     }
//     fflush(stdin);
//     cout<<"Tong giai thua cua ";
//     for (int i=0;i<n;i++) {
//         (oj1+i)->xuatGiatri();
//         cout<<"!";
//         cout<<"+="[i==n-1];
//     }
//     cout<<res;
//     delete [] oj1;
//     delete  v;
//     return 0;
// }
