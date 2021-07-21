#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
void in(){
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
main(){
	v.clear();
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		v.push_back(a[i]);
		cout << "Buoc " << i << ": ";
		in();
	}
	
}
