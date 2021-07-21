#include <iostream>
using namespace std;
using ll=long long;
ll c[92]={0};
char Fibo(int n, ll k){
	if (n==1) return '0';
	if(n==2) return '1';
	if(k<=c[n-2]) return Fibo(n-2,k);
	return Fibo(n-1,k-c[n-2]);
}
int main(){
	int t;cin>>t;
	while(t--){
		int n; ll k;
		cin>>n>>k;
//		ll c[n+1]={0};//0 1 1 2 3 5
		c[0]=0; c[1]=1;
		c[2]=1;
		for (ll i=3; i<=n; i++){
			c[i]=(c[i-1] +c[i-2]);
		}
		cout<<Fibo(n,k);
		cout<<endl;
		
	}
}
