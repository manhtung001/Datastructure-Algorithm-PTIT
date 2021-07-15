#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct so
{
 int gtri;
 int vtri;
};
bool cmp(so a, so b)
{
 if (a.gtri < b.gtri)
		return true;
 if (a.gtri == b.gtri && a.vtri < b.vtri)
		return true;
 return false;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		cin >> n;
		so a[n + 1];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].gtri;
			a[i].vtri = i;
		}
		sort(a, a + n, cmp);
		ll dem = 0;
		for (int i = 0; i < n; i++)
		{
			while (i != a[i].vtri)
			{
				dem++;
				swap(a[i], a[a[i].vtri]);
			}
		}
		cout << dem << endl;
 }
}
