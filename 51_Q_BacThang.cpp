#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, k;
		cin >> n >> k;
		ll f[n + 1];
		ll dem = 0;
		for (int i = 0; i < n; i++)
			f[i] = 0;
		for (int i = 0; i < n; i++)
		{
			f[i] = (dem + (i < k)) % mod;
			dem = (dem + f[i]) % mod;
			if (i >= k)
				dem = (dem + mod - f[i - k]) % mod;
		}
		cout << f[n - 1] << endl;
 }
}
