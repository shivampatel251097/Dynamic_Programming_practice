#include <bits/stdc++.h>
using namespace std;
class Item {
public:
	int weight;
	int value;
};

bool cmp(Item a, Item b) {
	double r1 = (double)a.value/a.weight;
	double r2 = (double)b.value/b.weight;
	return r1<r2;
}
int main()
{
	int n;
	cin>>n;
	int capacity;
	cin>>capacity;
	Item arr[n];
	for(int i=0;i<n;i++) {
		int a, b;
		cin>>a>>b;
		arr[i].weight = b;
		arr[i].value = a;
	}
	sort(arr, arr+n, cmp);
	double result 	= 0;
	double curr_weight = 0;
	for(int i=n-1;i>=0;i--) {
		if(arr[i].weight+curr_weight <= capacity) {
			result += arr[i].value;
			curr_weight+=arr[i].weight;
		} else {
			int diff = capacity - curr_weight;
			double temp = diff*((double)arr[i].value/arr[i].weight);
			result+=temp;
			break;
		}
	}
	cout<<fixed<<setprecision(1)<<result;
	return 0;
}