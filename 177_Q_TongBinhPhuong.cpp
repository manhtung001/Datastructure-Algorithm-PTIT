#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		memset(f, 0, sizeof(f));
		f[1] = 1;
		f[2] = 2;
		f[3] = 3;
		for (ll i = 4; i <= 10000; i++)
		{
			f[i] = i;
			for (ll j = 1; j <= sqrt(i); j++)
			{
				f[i] = min(f[i], f[i - j * j] + 1);
			}
		}
		cout << f[n] << endl;
 }
}
