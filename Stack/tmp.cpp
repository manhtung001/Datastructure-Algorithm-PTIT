#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 int t;
 cin >> t;
 cin.ignore();
 while (t--)
 {
  string s;
  getline(cin, s);
  stack<string> st;
  for (ll i = s.size() - 1; i >= 0; i--)
  {
   if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
   {
    string first = st.top();
    st.pop();
    string second = st.top();
    st.pop();
    st.push(first + second + s[i]);
   }
   else
   {
    st.push(string(1, s[i]));
   }
  }
  cout << st.top() << endl;
 }
}