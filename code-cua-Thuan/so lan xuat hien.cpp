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
        int n,x; cin>>n;int d=0;
        vector <int> a(n); cin>>x;
        for (auto &it: a){
            cin>>it;
            if(it==x){
                d++;
            }
        }
        if (d==0) cout<<-1;
        else cout<<d;
        cout<<endl;

    }
    return 0;
}
