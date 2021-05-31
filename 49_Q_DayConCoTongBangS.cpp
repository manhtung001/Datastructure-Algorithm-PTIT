#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, s;
		cin >> n >> s;
		ll a[n + 1], f[40005] = {0};
		f[0] = 1; // khoi tao
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			f[a[i]] = 1;
			for (int j = s; j >= a[i]; j--)
			{
				if (f[j - a[i]] == 1)
					f[j] = 1;
			}
		}
		if (f[s] == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
 }
}
