#include<bits/stdc++.h> 
using namespace std; 
bool isvalid(int *arr, int n, int m, int current_min) 
{ 
	int studentsRequired = 1; 
	int current_sum = 0; 
	for (int i = 0; i < n; i++) 
	{ 		if (arr[i] > current_min) 
			return false; 
		if (current_sum + arr[i] > current_min) 
		{ 
			studentsRequired++; 
			current_sum = arr[i]; 
			if (studentsRequired > m) 
				return false; 
		} 
		else
			current_sum += arr[i]; 
	} 
	return true; 
} 
int findPages(int *arr, int n, int m) 
{ 
	long long sum = 0; 
	if (n < m) 
		return -1; 
	for (int i = 0; i < n; i++) 
		sum += arr[i]; 
	int start = 0, end = sum; 
	int result = INT_MAX; 
	while (start <= end) 
	{ 
		int mid = (start + end) / 2; 
		if (isvalid(arr, n, m, mid)) 
		{ 
			result = max(result, mid); 
			end = mid - 1; 
		} 

		else
			start = mid + 1; 
	} 
	return result; 
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	int *arr=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << findPages(arr, n, m) << endl; 
	return 0; 
}
}
