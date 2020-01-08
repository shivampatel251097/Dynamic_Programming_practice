//Minimum sum path
#include<bits/stdc++.h>
using namespace std;
int minimumsumpath(int **arr,int n,int m)
{

}
int main()
{
	int n,m;
	cin>>n>>m;
	int *arr=new int* [n];
	int **dp=new int *[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[m];
		dp[i]=new int[m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			dp[i][j]=0;
		}
	}
	//Base case
	dp[0][0]=arr[0][0];
	for(int i=1;i<n;i++)
	{
		dp[i][0]=arr[i][0]+dp[i-1][0];
	}
	for(int i=1;i<m;i++)
	{
		dp[0][i]=arr[1][i]+dp[0][i-1];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			dp[i][j]=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
		}
	}
	cout<<dp[n-1][m-1];
	return 0;
}