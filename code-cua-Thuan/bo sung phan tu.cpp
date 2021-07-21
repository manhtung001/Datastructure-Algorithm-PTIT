#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n,x; cin>>n; int a[n+1];
        for (int i=0; i<n ;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int d=0;
        for (int i=0; i<n-1; i++){
            if(a[i]!=a[i+1]){
                d+=a[i+1]-a[i]-1;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
