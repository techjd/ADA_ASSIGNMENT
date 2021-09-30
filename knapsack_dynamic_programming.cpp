#include <bits/stdc++.h>
using namespace std;

int solve_knapsack(int *wt, int *val, int n, int maxWeight)
{
	int dp[n + 1][maxWeight + 1];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= maxWeight; j++)
		{
			if (i == 0 || j == 0)
			{
				dp[i][j] = 0;
			}
			else if (wt[i - 1] <= j)
			{
				dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	return dp[n][maxWeight];
}

int main()
{
	int totalNumberOfItems = 5;
	int wt[] = {2, 1, 3, 2};
	int val[] = {12, 10, 20, 15};
	int size = 5;
	cout << solve_knapsack(wt, val, totalNumberOfItems, size) << "\n";
	return 0;
}