#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int pre[], int n, int x, int y, int &id){  
    if(id == n) return; 
    if(pre[id] < x || pre[id] > y) return;  
    int t = pre[id]; 
    id++; 
    xuli(pre, n, x, t, id);  
    xuli(pre, n, t, y, id); 
    cout << t << " "; 
} 

void postOrder(int pre[], int n){ 
	int id = 0; 
    xuli(pre, n, INT_MIN, INT_MAX, id); 
}

main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int pre[n];
		for(int i = 0; i < n; i++) cin >> pre[i];
		postOrder(pre, n);
		cout << endl;
	}
}


