#include <bits/stdc++.h>

using namespace std;
struct Item {
	int value, weight;

	// Constructor

};
bool cmp(struct Item a, struct Item b)
{
	float r1 = (float)a.value / (float)a.weight;
	float r2 = (float)b.value / (float)b.weight;
	return r1 > r2;
}
float fractionalKnapsack(int W,  Item arr[], int n)
{
	sort(arr, arr + n, cmp);

	int curWeight = 0;
	float finalvalue = 0.0; 

	for (int i = 0; i < n; i++) {
		if (curWeight + arr[i].weight <= W) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}
		else {
			int remain = W - curWeight;
			finalvalue += arr[i].value
						* ((float)remain
							/ (float)arr[i].weight);
			break;
		}
	}

	return finalvalue;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int w,n;
		Item a[105];
		cin>>n>>w;
		for(int i=0; i<n; i++){
			cin>>a[i].value;
			cin>>a[i].weight;
		}
		float res=fractionalKnapsack(w,a,n);
		cout<<setprecision(2)<<fixed<<res<<endl;
		
	}
	return 0;
}
