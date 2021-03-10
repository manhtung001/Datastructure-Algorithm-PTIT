#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[1000001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll a[n + 1];
		memset(d, 0, sizeof(d));
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			d[a[i]]++;
		}
		sort(a, a + n);
		ll dem = 0;
		for (int i = a[0]; i <= a[n - 1]; i++)
		{
			if (d[i] == 0)
				dem++;
		}
		cout << dem << endl;
 }
}
