#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll st[100001];
main()
{
	ll q, top = -1;
	cin >> q;
	while (q--)
	{
		string s;
		while (cin >> s)
		{
			if (s == "PUSH")
			{
				ll n;
				cin >> n;
				st[++top] = n;
			}
			else if (s == "POP")
			{
				if (top >= 0)
					top--;
			}
			else
			{
				if (top == -1)
					cout << "NONE" << endl;
				else
				{
					cout << st[top] << endl;
				}
			}
		}
	}
}
