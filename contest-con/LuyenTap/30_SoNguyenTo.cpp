#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool chuaxet[201];
vector<int> nto;
vector<vector<int> > res;
int n, p, s, vt;
void sang(){
	for(int i = 0; i < 201; i++) chuaxet[i] = true;
	for(int i = 2; i < 201; i++){
		if(chuaxet[i]){
			nto.push_back(i);
			for(int j = i*i; j < 201; j += i){
				chuaxet[j] = false;
			}
		}
	}
}
void reset(){
	sang();
	for(int i = 0; i < nto.size(); i++){
		chuaxet[i] = true;
		if(nto[i] == p) vt = i;
	}
	res.clear(); 
}
void Try(int i, int sum, vector<int> v){
	if(sum > s) return;
	if(sum == s && v.size() == n){
		res.push_back(v);
		return;
	}
	for(int j = i; j <= nto.size(); j++){
		if(chuaxet[j]){
			if(sum + nto[j] <= s && v.size() < n){
				chuaxet[j] = false;
				v.push_back(nto[j]);
				Try(j+1,sum+nto[j],v);
				v.pop_back();
				chuaxet[j] = true;
			}
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> v;
		cin >> n >> p >> s;
		reset();
		Try(vt,0,v);
//		sort(res.begin(), res.end());
		cout << res.size() << endl;
		for(int i = 0; i < res.size(); i++){
			for(int j = 0; j < res[i].size(); j++){
				cout << res[i][j] << " ";
			}
		    cout << endl;
		} 
	}
}

