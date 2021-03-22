#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, k, a[1001];
		ll sum = 0, sum1 = 0, sum2 = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		sort(a, a + n);
		ll Min = min(k, n - k);
		for (int i = 0; i < Min; i++)
		{
			sum1 += a[i];
		}
		sum2 = sum - sum1;
		cout << sum2 - sum1 << endl;
 }
}
