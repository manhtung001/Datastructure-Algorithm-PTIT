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
  stack<ll> st;
  for (ll i = 0; i < s.size(); i++)
  {
   if (s[i] == '+')
   {
    ll first = st.top();
    st.pop();
    ll second = st.top();
    st.pop();
    ll tmp = second + first;
    st.push(tmp);
   }
   else if (s[i] == '-')
   {
    ll first = st.top();
    st.pop();
    ll second = st.top();
    st.pop();
    ll tmp = second - first;
    st.push(tmp);
   }
   else if (s[i] == '*')
   {
    ll first = st.top();
    st.pop();
    ll second = st.top();
    st.pop();
    ll tmp = second * first;
    st.push(tmp);
   }
   else if (s[i] == '/')
   {
    ll first = st.top();
    st.pop();
    ll second = st.top();
    st.pop();
    ll tmp = second / first;
    st.push(tmp);
   }
   else
   {
    st.push(s[i] - 48);
   }
  }
  cout << st.top() << endl;
 }
}