#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tong, res;
int cot[65], cxuoi[65], cnguoc[65], a[65][65];
int n = 8;
void nhap()
{
 res = 0;
 for (int i = 1; i <= n; i++)
 {
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
 }
 for (int i = 1; i <= n; i++)
 {
		cot[i] = true;
 }
 for (int i = 1; i <= 2 * n - 1; i++)
 {
		cxuoi[i] = true;
		cnguoc[i] = true;
 }
}

void Try(int i)
{
 for (int j = 1; j <= n; j++)
 {
		if (cot[j] && cxuoi[i - j + n] && cnguoc[i + j - 1])
		{
			cot[j] = false;
			cxuoi[i - j + n] = false;
			cnguoc[i + j - 1] = false;
			tong += a[i][j];
			if (i == n && res < tong)
				res = tong;
			else
				Try(i + 1);
			cot[j] = true;
			cxuoi[i - j + n] = true;
			cnguoc[i + j - 1] = true;
			tong -= a[i][j];
		}
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		nhap();
		Try(1);
		cout << res << endl;
 }
}
