#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n; 
string s;
bool OK = true;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++) s[i] = 'A';
}
void in(){
	for(int i = 1; i <= n; i++) cout << s[i];
	cout << " ";
}
void Next_String(){
	ll i = n;
	while(i > 0 && s[i] != 'A'){
		s[i] = 'A';
		i--;
	}
	if(i == 0) OK = false;
	else  s[i] = 'B';
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		while(OK){
			in();
			Next_String();
		}
		OK = true;
		cout << endl;
	}
}

