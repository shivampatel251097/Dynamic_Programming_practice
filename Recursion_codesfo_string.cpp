#include<bits/stdc++.h>
using namespace std;

void codes(string s,string osf,char *arr,vector<string>&vec){
if(s.size()==0){
vec.push_back(osf);
return;
}

int first=s[0]-'0';
int second=0;
if(s.size()>=2){
second=stoi(s.substr(0,2));

codes(s.substr(1),osf+arr[first],arr,vec);

if(second<=26){
codes(s.substr(2),osf+arr[second],arr,vec);
}
}
else
{
codes(s.substr(1),osf+arr[first],arr,vec);
}
}

int main()
{
char mapping[27]={'#','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string s;
cin>>s;
vector<string>vec;
cout<<"[";
codes(s,"",mapping,vec);
for(int i=0;i<vec.size()-1;i++)
cout<<vec[i]<<", ";
cout<<vec[vec.size()-1]<<"]";

}