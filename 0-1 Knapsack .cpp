//Knapsack using greedy
#include<bits/stdc++.h>
using namespace std;
long long knapsack(long long *wt,long long *val,long long tw,long long n)
{
	long long dp[n+1][tw+1];
	for(long long i=0;i<=tw;i++)
	{
		dp[0][i]=0;
	}
	for(long long i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=tw;j++)
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
	long long n,tw;
	cin>>n>>tw;
	long long *wt=new long long [n];
	long long *val=new long long [n];
	for(long long i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(long long i=0;i<n;i++)
	{
		cin>>val[i];
	}
	
	cout<<knapsack(wt,val,tw,n);
}