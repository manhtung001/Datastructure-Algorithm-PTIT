#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n,k; cin>>n>>k; vector <int> a(n); vector <int> check(100001,0);
        for (auto &it: a) {
            cin>>it; 
            check[it]=1;
        }
        int d=0;
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n ;j++){
                if (a[i]+a[j]==k) d++;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
