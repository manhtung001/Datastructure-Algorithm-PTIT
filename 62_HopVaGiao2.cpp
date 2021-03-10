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
		vector<int> vz, vx;
		memset(arr, 0, sizeof(arr));
		int z;
		for (int i = 0; i < n; i++)
		{
			cin >> z;
			if (arr[z] == 0)
			{
				arr[z] = 1;
				vz.push_back(z);
			}
		}
		for (int i = 0; i < m; i++)
		{
			cin >> z;
			if (arr[z] == 0)
			{
				vz.push_back(z);
			}
			if (arr[z] == 1)
			{
				vx.push_back(z);
			}
		}
		sort(vz.begin(), vz.end());
		sort(vx.begin(), vx.end());
		for (int i = 0; i < vz.size(); i++)
		{
			cout << vz[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < vx.size(); i++)
		{
			cout << vx[i] << " ";
		}
		cout << endl;
 }
}