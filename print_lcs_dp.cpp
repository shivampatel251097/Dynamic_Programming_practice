#include<bits/stdc++.h>
using namespace std;
void lcsdp(string s1,string s2,long long l1,long long l2)
{
	long long dp[l1+1][l2+1];
	for(long long i=0;i<=l1;i++)
		{
			for(long long j=0;j<=l2;j++)
			{
				if(i==0 or j==0)
				{
					dp[i][j]=0;
				}
				else if(s1[i-1]==s2[j-1])
				{
					dp[i][j]=1+dp[i-1][j-1];
				}
				else
				{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
string s="";
long long i = l1, j = l2; 
while (i > 0 && j > 0) 
{ 

	if (s1[i-1] == s2[j-1]) 
	{ 
		s += s1[i-1]; 
		i--; j--; 
	} 
	else if (dp[i-1][j] > dp[i][j-1]) 
		i--; 
	else
		j--; 
} 
reverse(s.begin(),s.end());
cout <<s; 
} 
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	long long l1=s1.length();
	long long l2=s2.length();
	lcsdp(s1,s2,l1,l2);
}