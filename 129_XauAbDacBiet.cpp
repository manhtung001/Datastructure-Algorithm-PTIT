#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
string x;
bool OK = true;

int ok(){
	ll dem = 0; 
	for(int i = 0; i <= n-k; i++){
		bool check = true;
		for(int j = i; j <= i+k-1; j++){
			if(x[j] == 'B'){  
				check = false;
				break;
			}
		}
		if(check) dem++; //dem so day chua A lien tiep
	}
	return (dem == 1); //chi duy nhat 1 day chua A lien tiep
}

void Next_String(){
	ll i = n-1;
	while(i >= 0 && x[i] != 'A'){
		x[i] = 'A';
		i--;
	}
	if(i < 0) OK = false;
	else x[i] = 'B';
}
main(){
	cin >> n >> k;
	x = "";
	for(int i = 0; i < n; i++) x += "A";
	vector<string> res;
	ll dem = 0;
	while(OK){
		if(ok()){
			res.push_back(x);
			dem++;
		}
		Next_String();
	}
	cout << dem << endl;
	for(int i = 0; i < dem; i++) cout << res[i] << endl;
	OK = true;
}

