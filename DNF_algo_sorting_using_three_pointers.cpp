//DNF algo to sort array consists(0,1,2)
#include<bits/stdc++.h>
using namespace std;
void dnf(int *arr,int n)
{
	int start=0,mid=0,end=n-1;
	while(mid<=end){
		if(arr[mid]==1){
			mid++;
		}
		else if(arr[mid==2])
		{
			swap(arr[mid],arr[end]);
			end--;
		}
		else
		{
			swap(arr[start],arr[mid]);
			start++;
			mid++;
		}
	}
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
	dnf(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}