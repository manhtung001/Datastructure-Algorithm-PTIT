#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum, dem;
struct Job
{
 ll id;
 ll deadline;
 ll profit;
};
bool compare(Job a, Job b)
{
 return (a.profit > b.profit);
}
void xuli(Job a[], ll n)
{
 sort(a, a + n, compare);
 ll x[1001], y[1001], m; // x la danh dau cac khe thoi gian
 for (int i = 0; i < n; i++)
 { // y la mang luu ket qua
		x[i] = false;
 }
 for (int i = 0; i < n; i++)
 {
		m = min(n, a[i].deadline) - 1;
		for (int j = m; j >= 0; j--)
		{
			if (x[j] == false)
			{
				y[j] = i;
				x[j] = true;
				break;
			}
		}
 }
 dem = 0, sum = 0;
 for (int i = 0; i < n; i++)
 {
		if (x[i] == true)
		{
			dem++;
			sum += a[y[i]].profit;
		}
 }
 cout << dem << " " << sum;
}
main()
{
 Job a[1001];
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		xuli(a, n);
		cout << endl;
 }
}
