#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, x[1001];
bool OK = true;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++) x[i] = n-i+1;
}
void in(){
	for(int i = 1; i <= n; i++) cout << x[i];
	cout << " ";
}
void Next_Permutaion(){
	int i = n-1;
	while(i > 0 && x[i] < x[i+1]) i--;
	if(i == 0) OK = false;
	else{
		int k = n;
		while(x[i] < x[k]) k--;
		swap(x[i],x[k]);
		int l = i+1, r = n;
		while(l <= r){
			swap(x[l],x[r]);
			l++; r--;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		while(OK){
			in();
			Next_Permutaion();
		}
		cout << endl;
		OK = true;
	}
}

