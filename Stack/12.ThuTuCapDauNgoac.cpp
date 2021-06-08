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
  ll count = 0;
  stack<ll> st;
  for (ll i = 0; i < s.size(); i++)
  {
   if (s[i] == '(')
   {
    count++;
    st.push(count);
    cout << st.top() << " ";
   }
   else if (s[i] == ')')
   {
    cout << st.top() << " ";
    st.pop();
   }
  }
  cout << endl;
 }
}