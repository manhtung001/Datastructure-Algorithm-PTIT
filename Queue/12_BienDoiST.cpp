#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1000001];
struct So
{
    int gtri;
    int dem;
};
int BFS(int s, int t)
{
    queue<So> q;
    q.push({s, 0});
    vs[s] = 1;
    while (!q.empty())
    {
        So u = q.front();
        q.pop();
        if (u.gtri == t)
            return u.dem;
        if (u.gtri * 2 == t || u.gtri - 1 == t)
            return u.dem + 1;
        if (vs[u.gtri * 2] == 0 && u.gtri < t)
        {
            q.push({u.gtri * 2, u.dem + 1});
            vs[u.gtri * 2] = 1;
        }
        if (vs[u.gtri - 1] == 0 && u.gtri > 1)
        {
            q.push({u.gtri - 1, u.dem + 1});
            vs[u.gtri - 1] = 1;
        }
    }
}
main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll s, t;
        cin >> s >> t;
        memset(vs, 0, sizeof(vs));
        ll res = BFS(s, t);
        cout << res << endl;
    }
}

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
        string tmp = "";
        for (ll i = 0; i < s.size(); i++)
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
