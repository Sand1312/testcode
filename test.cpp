#include <iostream>
#include <time.h>
#include "cstdlib"
#include "vector"
#include "iomanip"
#include "math.h"
#include "string"
#include "sstream"
//#define int long long
#define vi vector<int>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int const mod=1000000007;
using namespace std;
signed main () {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    int t;cin>>t;
//    cout<<t<<"\n";
//    while (t--){
//        int n=100000;
//        cout<<n<<"\n";
//        for (int i=0;i<n;i++) cout<<1000000000<<" \n"[i==n-1];
//    }
//    return 0;
// C++ program for the above approach
       int a[5]={2,3,5,7,11};
       int b=30,index{};
       while (b%a[index]==0) {
           cout<<a[index];
           index++;
       }
    }