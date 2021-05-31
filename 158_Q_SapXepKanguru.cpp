#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, a[100001];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		ll dem = n;
		for (int i = n / 2 - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= n / 2; j--)
			{
				if (a[j] >= a[i] * 2)
				{
					dem--;
					break;
				}
			}
		}
		cout << dem << endl;
 }
}
