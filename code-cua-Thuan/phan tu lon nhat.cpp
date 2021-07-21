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
        int n,k; cin>>n;
        vector <int> a(n); cin>>k;
        for (auto &it: a){
            cin>>it;
        }
        sort(a.begin(),a.end(),greater <int> ());
        for (int i=0; i<k ;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
