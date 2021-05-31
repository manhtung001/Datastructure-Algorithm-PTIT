#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int n;
 cin >> n;
 ll a[n + 1];
 for (int i = 1; i <= n; i++)
 {
		cin >> a[i];
 }
 ll res = 0;
 ll f[n + 1]; // f[] la day con tang dai ket thuc tai a[i]
 for (int i = 1; i <= n; i++)
 {
		f[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (a[i] > a[j])
				f[i] = max(f[i], f[j] + 1);
		}
		res = max(res, f[i]);
 }
 cout << res << endl;
}
