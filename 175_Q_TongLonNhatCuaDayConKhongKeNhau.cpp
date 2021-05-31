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
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		ll *f = new ll[n + 1];
		memset(f, 0, sizeof(f));
		f[0] = 0;
		f[1] = a[1];
		for (int i = 2; i <= n; i++)
		{
			f[i] = max(f[i - 2] + a[i], f[i - 1]);
		}
		cout << f[n] << endl;
 }
}
