#include<bits/stdc++.h>
using namespace std;

// function find Next greater element
void nextGreater(int arr[], int n, int next[], char order)
{
	// create empty stack
	stack<int> S;
	for (int i=n-1; i>=0; i--)
	{
		while (!S.empty() &&
			((order=='G')? arr[S.top()] <= arr[i] : arr[S.top()] >= arr[i]))
			S.pop();

		if (!S.empty())
			next[i] = S.top();\
		else
			next[i] = -1;

		// Push this element
		S.push(i);
	}
}
void nextSmallerOfNextGreater(int arr[], int n)
{
	int NG[n]; // stores indexes of next greater elements
	int RS[n]; // stores indexes of right smaller elements

	nextGreater(arr, n, NG, 'G');
\
	nextGreater(arr, n, RS, 'S');

	// If NG[i] == -1 then there is no smaller element
	// on right side. We can find Right smaller of next
	// greater by arr[RS[NG[i]]]
	for (int i=0; i< n; i++)
	{
		if (NG[i] != -1 && RS[NG[i]] != -1)
			cout << arr[RS[NG[i]]] << " ";
		else
			cout<<"-1"<<" ";
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		nextSmallerOfNextGreater(a,n);
		cout<<endl;		
	}
	return 0;
}
