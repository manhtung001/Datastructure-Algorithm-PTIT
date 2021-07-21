#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(int a,int b){
    if (a+b<0) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n; cin>>n; vector <int> a(n),b;
        for (auto &it: a){
            cin>>it;
        }
        ll res=1e9;
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if(abs(a[i]+a[j])<abs(res)){
                    res=a[i]+a[j];
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
