#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll f[1001], s[1001], n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> f[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (f[i] > f[j])
				{
					swap(f[j], f[i]);
					swap(s[j], s[i]);
				}
			}
		}
		int i = 0, dem = 1;
		for (int j = 1; j < n; j++)
		{
			if (s[j] >= f[i])
			{
				dem++;
				i = j;
			}
		}
		cout << dem << endl;
 }
}
