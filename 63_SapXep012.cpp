#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		vector<int> vt;
		ll n;
		cin >> n;
		int k;
		while (n--)
		{

			cin >> k;
			vt.push_back(k);
		}
		sort(vt.begin(), vt.end());
		for (int i = 0; i < vt.size(); i++)
			cout << vt[i] << " ";
		cout << endl;
 }
}
