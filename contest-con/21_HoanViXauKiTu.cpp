#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s, x;
bool chuaxet[1001];
void nhap(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		chuaxet[i] = true;
	}
}
void in(){
	for(int i = 0; i < s.size(); i++){
		cout << x[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 0; j < s.size(); j++){
		if(chuaxet[j] == true){
			x[i] = s[j];
			chuaxet[j] = false;
			if(i == s.size()-1) in();
			else Try(i+1);
			chuaxet[j] = true;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(0);
		cout << endl;
	}
}

