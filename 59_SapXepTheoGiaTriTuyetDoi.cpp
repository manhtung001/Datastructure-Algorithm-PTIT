#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x;
bool compare(ll a, ll b)
{
 return (abs(x - a) < abs(x - b));
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n >> x;
		ll *a = new ll[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		stable_sort(a, a + n, compare);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
 }
}
