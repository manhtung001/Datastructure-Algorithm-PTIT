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
		ll u2 = 1, u3 = 1, u5 = 1;
		f[1] = 1;
		for (ll i = 2; i < 10001; i++)
		{
			f[i] = min(f[u2] * 2, min(f[u3] * 3, f[u5] * 5));
			if (f[i] == f[u2] * 2)
				u2++;
			if (f[i] == f[u3] * 3)
				u3++;
			if (f[i] == f[u5] * 5)
				u5++;
		}
		cout << f[n] << endl;
 }
}
