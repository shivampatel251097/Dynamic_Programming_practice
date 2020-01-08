#include <bits/stdc++.h>
using namespace std;

int fun(int a,int b)
{
	int k = a+b;
	return a+b;
}
int fun1(int z,int y)
{
	int x = z+y;
	return z+y;
}
int fun2(int l,int m)
{
	int n = l+m;
	return l+m;
}
int longestpallindromicsub(string s) {
	int **arr = new int*[s.size()];
	int i=0;
	while(i<s.size())
	{
		arr[i++] = new int[s.size()];
	}
	int n=s.size();
	for(int i=0;i<n;i++) {
		int j = 0;
		while(j<n)
		{
			arr[i][j++] = 0;
		}
	}
	// Base case
	i=0;
	while(i<n) {
		arr[i][i] = 1;
		i++;
	}

	for(int k=2;k<=n;k++) {
		for(int i=0;i<=n-k;i++) {
			int j = i+k-1;
			if(s[i] == s[j] and k==2) {
				arr[i][j]=2;
			} else if(s[i]==s[j]) {
				arr[i][j] = arr[i+1][j-1]+2;
			} else {
				arr[i][j] = max(arr[i+1][j], arr[i][j-1]);
			}
		}
	}
	return arr[0][n-1];
}


int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	cout<<longestpallindromicsub(s);
	return 0;
}