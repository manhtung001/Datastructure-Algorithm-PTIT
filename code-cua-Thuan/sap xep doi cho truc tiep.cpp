#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void in(int a[], int n){
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}
main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++){
		cout << "Buoc " << i+1 << ": ";
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]) swap(a[i], a[j]);
		}
		in(a,n);
	}
}
