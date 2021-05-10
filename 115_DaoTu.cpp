#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 cin.ignore();
 while (t--)
 {
		string s;
		getline(cin, s);
		stack<string> st;
		ll n = s.size();
		string tmp = "";
		for (int i = 0; i < n; i++)
		{
			if (s[i] == ' ')
			{
				tmp += " ";
				st.push(tmp);
				tmp = "";
			}
			else
			{
				tmp += s[i];
			}
		}

		tmp += " ";
		st.push(tmp);

		while (!st.empty())
		{
			cout << st.top();
			st.pop();
		}
		cout << endl;
 }
}
