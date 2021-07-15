#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[101][101];
bool chuaxet[101][101];
string s;
vector<string> res;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			chuaxet[i][j] = true;
		}
	}
	res.clear();
}
void Try(int i, int j, string s){
	if(a[1][1] == 0 || a[n][n] == 0) return;
	if(i == n && j == n && a[n][n] == 1){
		res.push_back(s);
		return;
	}
	if(a[i+1][j] == 1 && chuaxet[i+1][j] == true && i < n){
		chuaxet[i+1][j] = false;
		Try(i+1, j, s+"D");
		chuaxet[i+1][j] = true;
	}
	if(a[i][j+1] == 1 && chuaxet[i][j+1] == true && j < n){
		chuaxet[i][j+1] = false;
		Try(i, j+1, s+"R");
		chuaxet[i][j+1] = true;
	}
	if(a[i-1][j] == 1 && chuaxet[i-1][j] == true && i > 1){
		chuaxet[i-1][j] = false;
		Try(i-1, j, s+"U");
		chuaxet[i-1][j] = true;
	}
	if(a[i][j-1] == 1 && chuaxet[i][j-1] == true && j > 1){
		chuaxet[i][j-1] = false;
		Try(i, j-1, s+"L");
		chuaxet[i][j-1] = true;
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		s = "";
		Try(1,1,s);
		if(res.size() == 0) cout << -1;
		else{
			sort(res.begin(), res.end());
			for(int i = 0; i < res.size(); i++){
				cout << res[i] << " ";
			}
		}
		cout << endl;
	}
}

