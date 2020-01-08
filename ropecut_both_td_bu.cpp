#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ropecuttd(int n)
{
	int dp[1000]={0};
	if(n==0 or n==1 or n==2 or n==3)
		return n;
	if(dp[n]!=0)return dp[n];
	int result=0;
	for(int i=1;i<n;i++)
	{
		result=max(result,max(i*(n-i),i*ropecuttd(n-i)));
	}
	dp[n]=result;
	return result;
}
int ropecutbu(int n)
{
	int dpbu[1000]={0};
	dpbu[0]=0;
	dpbu[1]=1;
	dpbu[2]=2;
	dpbu[3]=3;
	dpbu[4]=4;
	for(int i=5;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
		dpbu[i]=max(dpbu[i],dpbu[j]*dpbu[i-j]);
		}
	}

	return dpbu[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<ropecuttd(n)<<endl;
	cout<<ropecutbu(n)<<endl;
}