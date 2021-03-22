#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(ll a[], ll n)
{
 // tao hang doi uu tien theo thu tu tang dan
 priority_queue<ll, vector<ll>, greater<ll>> pq(a, a + n);
 // (a, a + n) da tu dong sap xep lai theo thu tu tang dan
 ll sum = 0;
 while (pq.size() > 1)
 {
		ll first = pq.top();
		pq.pop();
		ll second = pq.top();
		pq.pop();
		sum += first + second;
		pq.push(first + second);
 }
 cout << sum << endl;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll *a = new ll[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		xuli(a, n);
 }
}
