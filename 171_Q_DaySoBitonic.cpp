#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, a[101], f1[101], f2[101];
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
		{
			f1[i] = a[i];
			for (int j = 1; j < i; j++)
			{
				if (a[j] < a[i])
					f1[i] = max(f1[i], f1[j] + a[i]);
			}
		}
		for (int i = n; i >= 1; i--)
		{
			f2[i] = a[i];
			for (int j = n; j > i; j--)
			{
				if (a[j] < a[i])
					f2[i] = max(f2[i], f2[j] + a[i]);
			}
		}
		ll res = 0;
		for (int i = 1; i <= n; i++)
		{
			res = max(res, f1[i] + f2[i] - a[i]);
		}
		cout << res << endl;
 }
}
