#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
void xuli(ll a[], ll n)
{
 priority_queue<ll, vector<ll>, greater<ll> > pq(a, a + n);
 ll sum = 0;
 while (pq.size() > 1)
 {
		ll first = pq.top();
		pq.pop();
		ll second = pq.top();
		pq.pop();
		sum += (first + second) % mod;
		sum = sum % mod;
		pq.push((first + second) % mod);
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
