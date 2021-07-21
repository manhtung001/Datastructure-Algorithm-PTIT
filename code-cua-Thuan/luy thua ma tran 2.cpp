#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long p=1e9+7;
int n;
ll k; ll a[10][10],b[10][10];
void Mul(ll x[10][10],ll y[10][10]){
	ll tmp[10][10];
	for(int i=0; i<n ;i++){
		for(int j=0; j<n ;j++){
			ll res=0;
			for(int k=0; k<n ;k++)
			{
				res+=(x[i][k] * y[k][j]) %p;
				res%=p;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<n ;j++) 
			a[i][j]=tmp[i][j];
	}
}
void Pow(ll a[10][10], int x){
	if(x<=1) return;
	Pow(a,x/2);
	Mul(a,a);
	if(x%2==1) Mul(a,b);
}
void Solve(){
	cin>>n>>k;
	for(int i=0; i<n ;i++)
		for(int j=0; j<n ;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	Pow(a,k);
	ll res=0;
	for(int i=0; i<n ;i++){
		for(int j=0; j<n ;j++){
			if(i==j) {
				res+=a[i][j]%p;
				res%=p;
			}
		}
		
	}
	cout<<res<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	Solve();
    }
    return 0;
}
