#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101], x[101], n;
bool chuaxet[101];
ll Min, sum;
void Try(int i){
	for(int j = 2; j <= n; j++){
		if(chuaxet[j]){
			chuaxet[j] = false;
			x[i] = j;
		    sum += a[x[i-1]][x[i]];
		    if(i == n){
			    if(Min > sum + a[x[n]][x[1]]) Min = sum + a[x[n]][x[1]];
		    }
		    else{
			    if(sum < Min) Try(i+1);
		    }
		    sum -= a[x[i-1]][x[i]];
		    chuaxet[j] = true;
		}		
	}
}
main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= 100; i++) chuaxet[i] = true;
	Min = 99999999;
	sum = 0;
	x[1] = 1;
	Try(2);
	cout << Min << endl;
}
