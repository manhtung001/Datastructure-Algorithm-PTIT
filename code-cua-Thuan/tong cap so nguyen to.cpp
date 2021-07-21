#include <bits/stdc++.h>
using namespace std;
vector<bool> ok(1000007,false);
void sangnt(){
	ok[0]=ok[1]=true;
	for (long long i=2; i<=1000001;i++){
		if (ok[i]==false)
			for (long long j=i*i; j<=1000001; j+=i){
				ok[j]=true;
			}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	sangnt();
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        bool check=false;
        for (long long i=2; i<=n; i++){
            if(ok[i]==false && ok[n-i]==false)
            {
                cout<<i<<" "<<n-i;
                check=true;
                break;
            }
        }
        if (!check) cout<<"-1";
        cout<<'\n';
    }
    return 0;
}
