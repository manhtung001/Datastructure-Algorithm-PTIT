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
        int n; cin>>n;
        vector <int> a(n);
        for (auto &it: a){
            cin>>it;
        }
        sort(a.begin(),a.end());
        for (auto it: a) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}
