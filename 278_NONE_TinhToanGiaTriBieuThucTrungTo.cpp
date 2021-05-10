#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(char x)
{
 if (x == '*' || x == '/')
		return 3;
 else if (x == '+' || x == '-')
		return 2;
 else
		return -1;
}
string TrungTo_HauTo(string s)
{
 stack<char> st;
 string res = "";
 for (int i = 0; i < s.size(); i++)
 {
		if (s[i] >= '0' && s[i] <= '9')
			res += s[i];
		else if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				char y = st.top();
				st.pop();
				res += y;
			}
			if (st.top() == '(')
				st.pop();
		}
		else
		{ //s[i] la +-*/
			if (res[res.size() - 1] >= '0' && res[res.size() - 1] <= '9')
				res += '#';
			while (!st.empty() && check(s[i]) <= check(st.top()))
			{
				char y = st.top();
				st.pop();
				res += y;
			}
			st.push(s[i]);
		}
 }
 while (!st.empty())
 {
		if (st.top() != '(')
			res += st.top();
		st.pop();
 }
 return res;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		string s1 = TrungTo_HauTo(s);
		stack<ll> st;
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/')
			{
				ll first = st.top();
				st.pop();
				ll second = st.top();
				st.pop();
				if (s1[i] == '+')
				{
					ll res = second + first;
					st.push(res);
				}
				if (s1[i] == '-')
				{
					ll res = second - first;
					st.push(res);
				}
				if (s1[i] == '*')
				{
					ll res = second * first;
					st.push(res);
				}
				if (s1[i] == '/')
				{
					ll res = second / first;
					st.push(res);
				}
			}
			else
			{
				ll tmp = 0;
				while ((s1[i] >= '0' && s1[i] <= '9') && i < s1.size())
				{
					tmp = tmp * 10 + (s1[i] - '0');
					i++;
				}
				if (s1[i] != '#')
					i--;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
 }
}
