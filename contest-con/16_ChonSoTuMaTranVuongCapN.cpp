#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, a[10001][10001];
ll x[10001], chuaxet[10001], sum[10001];
vector<string> res;
void nhap(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}
void in(){
	if(sum[n] == k){
        string v = "";
        for(int j = 1; j <= n; j++){
        	v += (x[j]+'0');
        	v += ' ';
		}
		res.push_back(v);
	}
}
void Try(int i){ // i la hang
	for(int j = 1; j <= n; j++){ // j la cot
		if(chuaxet[j] == 0){
			chuaxet[j] = 1;
			x[i] = j;
			sum[i] = sum[i-1] + a[i][j];
			if(i == n) in();
		    else Try(i+1);
		    chuaxet[j] = 0;
		}

	}
}
main(){
	nhap();
	Try(1);
	cout << res.size() << endl;
	for(int i = 0; i < res.size(); i++){
//		for(int j = 0; j < res[i].size(); j++){
//			cout << v[j] << " ";
//		}
         cout << res[i];
		cout << endl;
	}
}

