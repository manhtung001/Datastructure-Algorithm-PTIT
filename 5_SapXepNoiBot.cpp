#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void in(int a[], int n)
{
 for (int i = 0; i < n; i++)
		cout << a[i] << " ";
 cout << endl;
}
main()
{
 int n;
 cin >> n;
 int a[n + 1];
 for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
 for (int i = 0; i <= n - 3; i++)
 {
		int kt = 0;
		for (int j = 0; j <= n - i - 2; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				kt = 1;
			}
		}
		if (kt == 0)
			break;
		else
		{
			cout << "Buoc " << i + 1 << ": ";
			in(a, n);
		}
 }
}
