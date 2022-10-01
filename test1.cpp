#include <iostream>
#include "algorithm"
#include "math.h"
#include "vector"
//using namespace std;
//int maxDivide(int a, int b) {
//    while (a%b==0) a/=b;
//    return a;
//}
//bool isUgly(int no) {
//    no = maxDivide(no,2);
//    no = maxDivide(no,3);
//    no = maxDivide(no,5);
//    return (no==1) ? 1:0;
//}
//unsigned eyygetNthugly(int n) {
//    int i{1},cnt{1};
//    while (n>cnt) {
//        i++;
//        if (isUgly(i)) cnt++;
//    }
//    return i;
//}
//int min_of_3_element(int a, int b, int c){
//    if (a>b) {
//       return (b<=c) ? b:c;
//    }
//    else return (a<=c) ? a:c;
//}
//unsigned getNthUglyNo(unsigned n) {
//    unsigned array_of_Uglynumber[n];
//    array_of_Uglynumber[0]={1};
//    int next_Ugly{1},i2{},i3{},i5{};
//    int next_multiple_of_2{2},next_multiple_of_3{3},next_multiple_of_5{5};
//    for (int i=1;i<n;i++) {
//        next_Ugly=min_of_3_element(next_multiple_of_2,next_multiple_of_3,next_multiple_of_5);
//        array_of_Uglynumber[i]=next_Ugly;
//        if (next_Ugly==next_multiple_of_2) {
//            i2++;
//            next_multiple_of_2=2*array_of_Uglynumber[i2];
//        }
//        if (next_Ugly==next_multiple_of_3) {
//            i3++;
//            next_multiple_of_3=3*array_of_Uglynumber[i3];
//        }
//        if (next_Ugly==next_multiple_of_5) {
//            i5++;
//            next_multiple_of_5=5*array_of_Uglynumber[i5];
//        }
//        // 3 cai if phai duoc chay 1 cach doc lap de tranh bi trung so
//    }
//    return next_Ugly;
//}
//void multiply (int F[2][2],int M[2][2]) {
//    int x = F[0][0] * M[0][0] +
//            F[0][1] * M[1][0];
//    int y = F[0][0] * M[0][1] +
//            F[0][1] * M[1][1];
//    int z = F[1][0] * M[0][0] +
//            F[1][1] * M[1][0];
//    int w = F[1][0] * M[0][1] +
//            F[1][1] * M[1][1];
//    F[0][0] = x;
//    F[0][1] = y;
//    F[1][0] = z;
//    F[1][1] = w;
//}
//void power(int F[2][2], int n) {
//    int M[2][2] = { { 1, 1 }, { 1, 0 } };
//    for(int i = 2; i <= n; i++) multiply(F, M);
//}
//int fib(int n){
//    int F[2][2] = { { 1, 1 }, { 1, 0 } };
//    if (n == 0) return 0;
//    power(F, n - 1);
//    return F[0][0];
//}
//unsigned cat(int n){
//    if (n<=1) return 1;
//    int ans{};
//    for (int i=0;i<n;i++) ans+=cat(i)*cat(n-i-1);
//    return ans;
//}
//unsigned long long hammu(long long a, long long n) {
//    if (n==0) return 1;
//    long long res{};
//    if (n==1) return a;
//    hammu(a,n/2);
//    res=hammu(a,n/2)%1000033*hammu(a,n/2)%1000033;
//    if (n%2!=0) res*=a;
//    return res%1000033;
//}
//unsigned long int catDP(unsigned n){
//    unsigned long int a[n+1];
//    a[0]=a[1]=1;
//    for (int i=2;i<=n;i++) {
//        a[i]=0;
//        for (int j=0;j<i;j++) {
//            a[i]+=a[j]*a[i-j-1];
//        }
//    }
//    return a[n];
//}
//unsigned long int bimomialCoefficient(int n, int k){
//    if (n-k<k) k=n-k;
//    int res{1};
//    for (int i=0;i<k;i++) {
//        res*=(n-i);
//        res/=(i+1);
//    }
//    return res;
//}
//unsigned long int catOn(unsigned n){
//    int res;
//    res= bimomialCoefficient(2*n,n)/(n+1);
//    return res;
//}
int binarySearch(int *a,int n,int x){
        int l{},r{n-1},m{};
        while (l<=r){
            m=(l+r)/2;
            if (a[m]==x) return m;
            else if (a[m]>x) r=m-1;
            else l=m+1;
        }
    return -1;
}
#include <iostream>
#include <vector>
//using namespace std;
//const int mod=1e9+7;
//int pown(int x,int y){
//    long long res=1,ans=x;
//    while(y){
//        if(y&1) res=res*ans%mod;
//        ans=ans*ans%mod;
//        y>>=1;
//    }
//    return res;
//}
