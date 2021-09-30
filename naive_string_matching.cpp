#include <bits/stdc++.h>
using namespace std;

int main()
{
	string text = "aabcaaabcaabcdaabbabc";
	string pattern = "abc";

	int n = text.length();
	int m = pattern.length();

	for (int i = 0; i <= n - m; i++)
	{
		int j;
		int cnt = 0;
		for (j = 0; j < m; j++)
		{
			if (pattern[j] == text[i + j])
			{
				cnt++;
			}
		}

		if (cnt == m)
		{
			cout << i << "\n";
		}
	}

	return 0;
}