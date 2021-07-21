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
        int n; cin>>n; int a[n+5],x,vt; cin>>x; bool check=false;
        for (int i=0; i<n; i++){
            cin>>a[i]; 
            if(!check)
                if (x==a[i]){
                    vt=i;
                    check=true;
                }
        }
        if(check) cout<<vt+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
