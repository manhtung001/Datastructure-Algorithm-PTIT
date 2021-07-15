#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, dem, xuoi[51], nguoc[51], cot[21], x[101];
void reset(){
	for(int i = 1; i <= n; i++) cot[i] = true;
	for(int i = 1; i <= 2*n; i++){
		xuoi[i] = true;
		nguoc[i] = true;
	}
	dem = 0;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			x[i] = j;
			cot[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if(i == n) dem++;
			else Try(i+1);
			cot[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		reset();
		Try(1);
		cout << dem << endl;
	}
}

