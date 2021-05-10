#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, dem = 0, a[101], tong;
bool b[100];
bool check = false;
void Try(int sum, int dem)
{
 if (check == true)
		return;
 if (dem == k)
 {
		check = true;
		return;
 }
 for (int i = 1; i <= n; i++)
 {
		if (b[i] == false)
		{
			b[i] = true;
			if (sum == tong)
			{
				Try(0, dem + 1);
				return;
			}
			if (sum > tong)
				return;
			else
				Try(sum + a[i], dem);
		}
		b[i] = false;
 }
}
main()
{
 ll t;
 cin >> t;
 while (t--)
 {
		cin >> n >> k;
		tong = 0;
		check = false;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			b[i] = false;
			tong += a[i];
		}
		if (tong % k != 0)
			cout << 0;
		else
		{
			tong = tong / k;
			Try(0, 0);
			if (check == true)
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
 }
}
