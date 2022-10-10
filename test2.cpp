#include <iostream>
#include <time.h>
#include "cstdlib"
#include "vector"
#include "iomanip"
#include "math.h"
#include "string"
#include "sstream"
#include <set>
#define int long long
//#define vi vector<int>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int const mod=1000007;
using namespace std;
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<int> se;
     int n , m; cin >> n >> m;
     vector<int> v;
     for(int i = 0; i<m; i++) {
         int x; cin>> x;
         se.insert(x);
         v.push_back(x);
     }
    vector<int > v1;
     vector<int> v2;
     vector<int> v3;
     for (int i =0;i<m; i++){
         if(v[i]+1==v[i+1]) {
             v1.push_back(v[i]);
             for(int j =i+1;j<=m;j++) {
                 if(v[j]!=v[i]+j-i) {
                     v1.push_back(v[j-1]+n);
                     i =j-1;
                     break;
                 }
             }
         } else v1.push_back(v[i]);
     }
     cout << "Errors: " ;
     for(int i=0;i<v1.size()-1;i++) {
         if(v1[i+1]>n) {
             if(i==v1.size()-2) {
                 cout << "and " << v1[i] << "-" << v1[i+1]-n ;
                 break;
             }
             if(i==v1.size()-4) {
                 cout << v1[i] << "-" << v1[i+1]-n << " ";
                 i++;
             } else {
                 cout << v1[i] << "-" << v1[i + 1] - n << ", ";
                 i++;
             }
         } else {
             if(i==v1.size()-2) {
                 cout << v1[i] << " and " << v1[i+1]-n;
                 break;
             }
             if(i==v1.size()-3) {
                 cout << v1[i] << " ";
             }else {
                 cout << v1[i] << ", ";
             }
         }
     }
   cout << endl;
    cout << "Correct: ";

    for(int i =1; i <=n;i++) {
        if(se.count(i)==0){
            v2.push_back(i);
        }
    }
    for (int i =0;i<v2.size(); i++){
        if(v2[i]+1==v2[i+1]) {
            v3.push_back(v2[i]);
            for(int j =i+1;j<=v2.size();j++) {
                if(v2[j]!=v2[i]+j-i) {
                    v3.push_back(v2[j-1]+n);
                    i =j-1;
                    break;
                }
            }
        } else v3.push_back(v2[i]);
    }
    for(int i=0;i<v3.size()-1;i++) {
        if(v3[i+1]>n) {
            if(i==v3.size()-2) {
                cout << "and " << v3[i] << "-" << v3[i+1]-n ;
                break;
            }
            if(i==v3.size()-4) {
                cout << v3[i] << "-" << v3[i+1]-n << " ";
                i++;
            } else {
                cout << v3[i] << "-" << v3[i + 1] - n << ", ";
                i++;
            }
        } else {
            if(i==v3.size()-2) {
                cout << v3[i] << " and " << v3[i+1]-n;
                break;
            }
            if(i==v3.size()-3) {
                cout << v3[i] << " ";
            }else {
                cout << v3[i] << ", ";
            }
        }
    }
}
