#include <bits/stdc++.h>
using namespace std;
int ropecut(int n)
{
	if(n==0 or n==1 or n==2 or n==3)
		return n;
	int result=0;
	for(int i=1;i<n;i++)
	{
		result=max(result,max(i*(n-i),i*ropecut(n-i)));
	}
	return result;
}
int main()
{
	int n;
	cin>>n;
	cout<<ropecut(n);

}