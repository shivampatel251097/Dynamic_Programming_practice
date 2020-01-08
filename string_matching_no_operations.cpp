#include<bits/stdc++.h>
using namespace std;
int stringmatchingdp(string s1,strings2)
{
	if(s1.size()==0 or s2.size()==0)
	{
		return abs((int)s1.size()-s2.size());
	}

}
int stringmatching(string s1,string s2)
{
	if(s1.size()==0 or s2.size()==0)
	{
		return abs((int)s1.size()-s2.size());
	}
	int res=0;
	if(s1[0]==s2[0])
	{
		res=stringmatching(s1.substr(1),s2.substr(1));
	}
	else
	{
		int call1=1+stringmatching(s1.substr(1),s2.substr(1));
		int call2=1+stringmatching(s1,s2.substr(1));
		int call3=1+stringmatching(s1.substr(1),s2);
		res=min(call1,min(call2,call3));
	}
	return res;
}
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<stringmatching(s1,s2);
	return 0;
}