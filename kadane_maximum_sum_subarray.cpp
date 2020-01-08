#include<bits/stdc++.h>
using namespace std;
int kadane(int *arr,int n)
{
int global_max=INT_MIN;
int curr_sum=0;
for(int i=0;i<n;i++)
{
	curr_sum+=arr[i];
	if(curr_sum<0)
	{
		curr_sum=0;
	}
	if(curr_sum>global_max){
		global_max=curr_sum;
	}
}
return global_max;
}

int main()
{
	int n;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<kadane(arr,n);
}