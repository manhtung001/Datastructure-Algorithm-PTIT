#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll a[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int dau = 0, cuoi = n - 1;
		while (dau < cuoi)
		{
			cout << a[cuoi] << " " << a[dau] << " ";
			cuoi--;
			dau++;
		}
		if (n % 2 != 0)
			cout << a[n / 2] << " ";
		cout << endl;
 }
}
