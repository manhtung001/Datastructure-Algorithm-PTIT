#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
		ll *x = new ll[n + 1]; // luu cac phan tu ben phai nn
		stack<ll> st;
		for (int i = n - 1; i >= 0; i--)
		{

			while (!st.empty() && a[i] >= st.top())
				st.pop();

			if (st.empty())
				x[i] = -1;
			else
				x[i] = st.top();

			st.push(a[i]);
		}
		for (int i = 0; i < n; i++)
			cout << x[i] << " ";
		cout << endl;
 }
}
