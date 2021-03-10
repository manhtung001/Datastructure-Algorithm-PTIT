#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, m;
		cin >> n >> m;
		ll *a = new ll[n + 1];
		ll *b = new ll[m + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < m; i++)
			cin >> b[i];
		sort(b, b + n);
		ll res = a[n - 1] * b[0];
		cout << res << endl;
 }
}
