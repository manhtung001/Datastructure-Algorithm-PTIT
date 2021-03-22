#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, a[101];
		ll so1 = 0, so2 = 0, sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				so1 = so1 * 10 + a[i];
			}
			else
				so2 = so2 * 10 + a[i];
		}
		sum = so1 + so2;
		cout << sum << endl;
 }
}
