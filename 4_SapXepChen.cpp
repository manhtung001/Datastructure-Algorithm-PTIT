#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void InsertSort(int A[], int n)
{
 int t, j;
 cout << "Buoc 0: " << A[0] << endl;
 for (int i = 1; i < n; i++)
 {
		j = i - 1;
		t = A[i];
		while (t < A[j] && j >= 0)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = t;
		cout << "Buoc " << i << ": ";

		for (int k = 0; k < i + 1; k++)
		{
			cout << A[k] << " ";
		}
		cout << endl;
 }
}

main()
{
 int n;
 cin >> n;
 int A[n + 1];
 for (int i = 0; i < n; i++)
		cin >> A[i];
 InsertSort(A, n);
}
