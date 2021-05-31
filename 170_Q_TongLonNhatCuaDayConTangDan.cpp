#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, a[1001];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll f[1001];
		f[0] = a[0];
		for (int i = 1; i < n; i++)
		{
			f[i] = a[i];
			for (int j = 0; j < i; j++)
			{
				if (a[j] < a[i])
					f[i] = max(f[i], f[j] + a[i]);
			}
		}
		sort(f, f + n);
		cout << f[n - 1] << endl;
 }
}
