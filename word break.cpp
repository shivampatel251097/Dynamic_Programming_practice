//word break;
#include<bits/stdc++.h>
using namespace std;
bool wordbreak(string str,unordered_map <string,bool> mp)
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
int main()
{
	string s;
	cin>>s;
	unordered_map <string,bool> mp;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		mp[s]=true;
	}
	cout<<wordbreak(str,mp);
}