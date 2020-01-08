//Generate Paranthesis
# include<bits/stdc++.h>
using namespace std;
# define MAX_SIZE 100 

void _printbracket(int pos, int n, int open, int close); 
void printbracket(int n) 
{ 
	if(n > 0) 
		_printbracket(0, n, 0, 0); 
	return; 
}	 

void _printbracket(int pos, int n, int open, int close) 
{ 
	static char s[MAX_SIZE];	 
	
	if(close == n) 
	{ 
		printf("%s \n", s); 
		return; 
	} 
	else
	{ 
		if(open > close) 
		{ 
			s[pos] = ')'; 
			_printbracket(pos+1, n, open, close+1); 
		} 
		
		if(open<n) 
		{ 
		s[pos] = '('; 
		_printbracket(pos+1, n, open+1, close); 
		} 
	} 
} 
int main() 
{ 
	int n;
	cin>>n; 
	printbracket(n); 
	return 0; 
} 
