#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void merge(ll dau, ll cuoi, ll giua, ll a[])
{
 ll n1 = giua - dau + 1;
 ll n2 = cuoi - giua;
 ll c[n2], b[n1];
 for (int i = 0; i < n1; i++)
		b[i] = a[dau + i];
 for (int j = 0; j < n2; j++)
		c[j] = a[giua + 1 + j];
 ll i = 0, j = 0, k = dau;
 while (i < n1 && j < n2)
 {
		if (b[i] <= c[j])
		{
			a[k] = b[i];
			i++;
		}
		else
		{
			a[k] = c[j];
			j++;
		}
		k++;
 }
 while (i < n1)
 {
		a[k] = b[i];
		i++;
		k++;
 }
 while (j < n2)
 {
		a[k] = c[j];
		j++;
		k++;
 }
}
void mergeSort(ll dau, ll cuoi, ll a[])
{
 if (dau < cuoi)
 {
		ll giua = dau + (cuoi - dau) / 2;
		mergeSort(dau, giua, a);
		mergeSort(giua + 1, cuoi, a);
		merge(dau, cuoi, giua, a);
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll *a = new ll[n + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		mergeSort(0, n - 1, a);
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
 }
}
