#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, s;
int dem, x[101];
void Try(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			ll sum = 0;
			for(int t = 1; t <= k; t++){
				sum += x[t];
			}
			if(sum == s) dem++;
		} 
		else Try(i+1);
	}
}
main(){
	while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
	    dem = 0;
	    for(int i = 0; i <= 20; i++) x[i] = 0;
		Try(1);
	    cout << dem << endl;
	}
}

