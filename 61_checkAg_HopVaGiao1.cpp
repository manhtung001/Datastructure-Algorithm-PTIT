#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, m;
		cin >> n >> m;
		ll *a = new ll[n + 1];
		ll *b = new ll[m + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		ll i = 0, j = 0;
		while (i < n && j < m)
		{
			if (a[i] < b[j])
				cout << a[i++] << " ";
			else if (a[i] > b[j])
				cout << b[j++] << " ";
			else
			{
				cout << a[i++] << " ";
				j++;
			}
		}
		while (i < n)
			cout << a[i++] << " ";
		while (j < m)
			cout << b[j++] << " ";
		cout << endl;
		i = 0, j = 0;
		while (i < n && j < m)
		{
			if (a[i] < b[j])
				i++;
			else if (a[i] > b[j])
				j++;
			else
			{
				cout << a[i++] << " ";
				j++;
			}
		}
		cout << endl;
 }
}
