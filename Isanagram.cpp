//Is Anagram
#include<bits/stdc++.h>
using namespace std;
bool isanagram(int *hash1,int *hash2)
{
	for(int i=0;i<26;i++)
	{
		if(hash1[i]!=hash2[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string s1,s2;
	cin>>s1>>s1;
	int hash1[26]={0};
	int hash2[26]={0};
	if(s1.size()!=s2.size())
	{
		cout<<"false";
		return 0;
	}
	else
	{
		for(int i=0;i<s1.size();i++)
		{
			hash1[s1[i]-'a']++;
		}
		for(int i=0;i<s2.size();i++)
		{
			hash2[s2[i]-'a']++;
		}
	}
	if(isanagram(hash1,hash2))
	{
		cout<<"true";
	}
	else{
		cout<<false;
	}
}