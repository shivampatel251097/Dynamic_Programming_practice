//Knapsack using greedy
#include<bits/stdc++.h>
using namespace std;
bool targetsubset(int *arr,int n,int tw)//tw-target weight
{
	bool dp[n+1][tw+1];
	for(int i=0;i<=tw;i++)
	{
		dp[0][i]=false;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=false;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=tw;j++)
		{
			if(arr[i-1]>j){
				dp[i][j]=dp[i-1][j];
			}
			else if(arr[i-1]==j)
			{
				dp[i][j]=true;
			}
			else
			{
				dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]];
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=tw;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[n][tw];
}
int main()
{
	int n;
	cin>>n;
	int tw;
	cin>>tw;
	int *val=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	cout<<targetsubset(val,n,tw);
}