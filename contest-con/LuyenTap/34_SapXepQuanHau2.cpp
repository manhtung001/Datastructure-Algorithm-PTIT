#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n = 8, x[10001], a[101][101];
bool cot[10], xuoi[101], nguoc[100];
ll sum, res;
void reset(){
	for(int i = 1; i <= n; i++) cot[i] = true;
	for(int i = 1; i <= 2*n; i++){
		xuoi[i] = true;
		nguoc[i] = true;
	}
	res = 0;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			x[i] = j;
			sum += a[i][j];
			cot[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if(i == n){
				if(res < sum) res = sum;
			} 
			else Try(i+1);
			cot[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
			sum -= a[i][j];
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		reset();
		Try(1);
		cout << res << endl;
	}
}

