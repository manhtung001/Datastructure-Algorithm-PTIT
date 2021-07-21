#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n; cin>>n; int a[10]={0};
        ll x;
		for (int i=0; i<n ;i++){
			cin>>x; 
			while(x>0){
				a[x%10]++;
				x/=10;
			}
		}
		for (int i=0; i<=9; i++){
			if(a[i]>0) cout<<i<<" ";
		}
        cout<<endl;
    }
    return 0;
}
