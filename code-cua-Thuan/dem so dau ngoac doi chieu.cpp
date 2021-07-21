#include<bits/stdc++.h>
using namespace std;
int countMinReversals(string str)
{
	int len = str.size();
	stack<char> s;
	for (int i=0; i<len; i++)
	{
		if (str[i]==')' && !s.empty()) // neu phan tu thu i la ) va stack khong rong thi kiem tra phan tu dau tien(phantumoi them vao ) co la dau "(" hay khong
										//neu co thi pop ra khoi stack.
										//them vao tiep phan tu s[i
		{
			if (s.top()=='(')
				s.pop();
			else
				s.push(str[i]); // ))))
		}
		else
			s.push(str[i]);//  )(((
	}
	int red_len = s.size();
	int n = 0;
	while (!s.empty() && s.top() == '(')
	{
		s.pop();
		n++;
	}

	return (red_len/2+ n%2);
}

// Driver program to test above function
int main()
{
	int t; cin>>t;
	while(t--){
		string s1; cin>>s1;
		cout<<countMinReversals(s1)<<endl;
	}
	return 0;
}
