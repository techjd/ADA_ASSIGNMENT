#include <bits/stdc++.h>
using namespace std;

int calculatenCr(int n, int k)
{
	int dp[n + 1][k + 1];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if ((j == 0) || (i == j))
			{
				dp[i][j] = 1;
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}

	return dp[n][k];
}

int main()
{
	cout << calculatenCr(5, 3) << "\n";
	return 0;
}