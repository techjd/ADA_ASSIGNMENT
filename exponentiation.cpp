#include <bits/stdc++.h>
using namespace std;

int exponentiation(int base, int power)
{
	if (power == 0)
	{
		return 1;
	}

	if (power % 2 == 0)
	{
		return exponentiation(base, power / 2) * exponentiation(base, power / 2);
	}
	else
	{
		return base * exponentiation(base, power / 2) * exponentiation(base, power / 2);
	}
}

int main()
{
	int base = 2;
	int power = 5;
	cout << exponentiation(base, power) << "\n";
	return 0;
}