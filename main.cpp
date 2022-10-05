#include<iostream>
using namespace std;
long long uscln(int a,int b){
    return (b==0)? a:uscln(b,a%b);
}
long long BSCNN(int a, int b){
    return (a / uscln(a, b)) * b;
}
signed main(){
    int n;cin>>n;
    int res{};
    for (int i=1;i<=n;i++) res+= BSCNN(2*i-2,2*i);
    cout<<res;
}