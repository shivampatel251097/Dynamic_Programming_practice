#include <bits/stdc++.h>
using namespace std;

long long knapsack(long long value[], long long weight[], long long maxwt, long long n)
{

    long long dp[n + 1][maxwt + 1];

    for (long long i = 0; i <= n; i++)
    {
        for (long long j = 0; j <= maxwt; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (weight[i - 1] <= j)
                dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][maxwt];
}

int main()
{
    long long n;
    cin >> n;
    long long value[n];
    long long weight[n];
    long long maxwt;
    cin >> maxwt;
    for (long long i = 0; i < n; i++)
        cin >> weight[i];

    for (long long i = 0; i < n; i++)
        cin >> value[i];

    cout << knapsack(value, weight, maxwt, n);
}