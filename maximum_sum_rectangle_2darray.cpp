#include<bits/stdc++.h>
using namespace std;

int kadane(int *temp, int n)
{
    int  global_max = INT_MIN, curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + temp[i];
        if ( global_max < curr_sum)
             global_max = curr_sum;

        if (curr_sum < 0)
            curr_sum = 0;
    }
    return  global_max;
}

int maxsumrec(int **a,int n,int m){

    int res=INT_MIN;
    for(int i=0;i<n;i++){
        int *temp=new int[n]();
        for(int j=i;j<m;j++){
            //work

            for(int k=0;k<n;k++){
                temp[k]+=a[k][j];
            }

            int kadane_ans=kadane(temp,n);
            if(res<kadane_ans){
                res=kadane_ans;
            }
        }
        delete [] temp;
    }

    return res;
}

int main(){

    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;

    int **a=new int*[n];

    for (int i = 0; i < m; i++)
    {
        a[i]=new int[m];
    }
    

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    cout << maxsumrec(a,n, m)<<endl;
    }
}