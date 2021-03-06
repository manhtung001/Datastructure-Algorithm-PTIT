#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll *a = new ll[n + 1];
		ll *b = new ll[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		ll i = 0, j = n - 1;
		while (i < n && a[i] == b[i])
			i++;
		while (j >= 0 && a[j] == b[j])
			j--;
		ll l = min(i, j);
		ll r = max(i, j);
		cout << l + 1 << " " << r + 1;
		cout << endl;
 }
}
