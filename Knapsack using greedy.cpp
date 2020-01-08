//Knapsack using greedy
#include<bits/stdc++.h>
using namespace std;
int knapsack(int *wt,int *val,int tw,int n)
{
	int dp[n+1][tw+1];
	for(int i=0;i<=tw;i++)
	{
		dp[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=tw;j++)
		{
			if(wt[i-1]>j){
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
			}
		}
	}
	return dp[n][tw];
}
int main()
{
	int n,tw;
	cin>>n>>tw;
	int *wt=new int [n];
	int *val=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	cout<<knapsack(wt,val,tw,n);
}