#include <bits/stdc++.h>

using namespace std;
int arr[1000007];
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, m;
		cin >> n >> m;
		vector<int> v;
		int z;
		for (int i = 0; i < n + m; i++)
		{
			cin >> z;
			v.push_back(z);
		}

		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
 }
}