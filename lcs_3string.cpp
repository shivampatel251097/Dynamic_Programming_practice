//lcs 3 string
#include<bits/stdc++.h>
using namespace std;
int lcsdp(string s1,string s2,string s3)
{
	int l1=s1.length();
	int l2=s2.length();
	int l3=s3.length();
	int dp[l1+1][l2+1][l3+1];
	for(int i=0;i<=l1;i++)
		{
			for(int j=0;j<=l2;j++)
			{
				for(int k=0;k<=l3;k++){
					if(i==0 or j==0 or k==0)
					{
						dp[i][j][k]=0;
					}
					else if(s1[i-1]==s2[j-1] and s1[i-1]==s3[k-1])
					{
						dp[i][j][k]=1+dp[i-1][j-1][k-1];
					}
					else
					{
						dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
					}
				}

			}
		}
		return dp[l1][l2][l3];
}
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	cout<<lcsdp(s1,s2,s3);
}