//word break;
#include<bits/stdc++.h>
using namespace std;
unordered_map <string,bool> mp;
bool wordbreak(string str)
{
	if(str.size()==0)return true;
	for(int i=1;i<=str.size();i++)
	{
		string prefix=str.substr(0,i);
		if(mp.find(prefix)!=mp.end() and wordbreak(str.substr(i)))
		{
			return true;
		}
	}
	return false;
}
bool wordbreakdp(string str,int*dp,string os)
{
	int n=s.size();
	if(n==0){
		return true;
	}
	if(dp[n]==-1)
	{
		dp[n]=0;
		for(int i=1;i<str.size();i++)
		{
			string prefix=str.substr(0,i);
			if(mp.find(prefix)!=mp.end() and wordbreak(str.substr(i)))
		{
			dp[n]=1;
			return true;
		}
		}
	}
	return dp[n]==1;
}
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		mp[s]=true;
	}
	int dp[100];
	for(int i=0;i<100;i++)
	{
		dp[i]=-1'
	}
	cout<<wordbreak(s)<<endl;
	cout<<wordbreakdp(s)<<endl;
}