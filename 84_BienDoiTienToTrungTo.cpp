#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void TienTo_TrungTo(string s)
{
	stack<string> st;
	string res = "";
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			st.push(string(1, s[i]));
		}
		else
		{ // s[i] la +-*/
			string first = st.top();
			st.pop();
			string second = st.top();
			st.pop();
			res = "(" + first + s[i] + second + ")";
			st.push(res);
		}
	}
	cout << st.top();
}
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		TienTo_TrungTo(s);
		cout << endl;
	}
}
