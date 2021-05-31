#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll f[1001], a[1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, k;
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		memset(f, 0, sizeof(f));
		f[0] = 1;
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[j] <= i)
					f[i] = (f[i] + f[i - a[j]]) % mod;
			}
		}
		cout << f[k] << endl;
 }
}
