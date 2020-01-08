#include <iostream>
using namespace std;

int countMazePath(int endrow, int endcol, int curr_row, int curr_col,string osf) {
// base case
if(curr_row == endrow and curr_col == endcol) {
cout<<osf<<" ";
return 1;
} 
if(curr_row>endrow or curr_col>endcol) {
return 0;
}

int r_result = countMazePath(endrow, endcol, curr_row+1, curr_col,osf+"V");
int h_result = countMazePath(endrow, endcol, curr_row, curr_col+1,osf+"H");
int d_result = 0;
d_result = countMazePath(endrow, endcol, curr_row+1, curr_col+1,osf+"D");
return r_result+h_result+d_result;
}

int main(int argc, char const *argv[])
{
    int n1,n2;
    cin>>n1>>n2;
int d=countMazePath(n1, n2, 1, 1,"");
cout<<endl<<d;
return 0;
}