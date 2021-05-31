#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int search(int a[], int x, int n)
{
 for (int i = 0; i < n; i++)
 {
		if (a[i] == x)
			return i;
 }
 return -1;
}
void postOrder(int in[], int pre[], int n)
{
 int root = search(in, pre[0], n);
 if (root != 0)
		postOrder(in, pre + 1, root);
 if (root != n - 1)
		postOrder(in + root + 1, pre + root + 1, n - root - 1);
 cout << pre[0] << " ";
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		cin >> n;
		int pre[n], in[n];
		for (int i = 0; i < n; i++)
			cin >> in[i];
		for (int i = 0; i < n; i++)
			cin >> pre[i];
		postOrder(in, pre, n);
		cout << endl;
 }
}
