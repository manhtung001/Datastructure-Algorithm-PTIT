#include<iostream>
#include<stack>
#define ll long long
using namespace std;
const int oo = 111111;
ll A[oo];
ll R[oo], L[oo], D[oo], P[oo], top = 0;
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		top = 0;
		for(int i=0; i<n; i++) cin >> A[i];
		D[0] = -1;
		stack<int> st1, st2;
		st1.push(-1);
		for(int i=0; i<n; i++){
			while(st1.size() > 1 && A[st1.top()] >= A[i]) st1.pop();
			L[i] = st1.top() + 1;
			st1.push(i);		
		}
		st2.push(n);
		for(int i=n-1; i>=0; i--){
			while(st2.size() > 1 && A[st2.top()] >= A[i]) st2.pop();
			R[i] = st2.top() - 1;
			st2.push(i);
		}
		ll ans = 0;
		for(int i=0; i<n; i++){
			ans = max(ans, (R[i] - L[i] + 1)*A[i]);
		}
		cout << ans << endl;
	}
}
