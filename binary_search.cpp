#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int size, int target)
{
	int low = 0;
	int high = size;
	while (low <= high)
	{
		int mid = high + (low - high) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (target < arr[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int size = 10;
	int arr[size] = {5, 8, 9, 10, 11, 15, 20, 100, 120, 200};
	int ans = binary_search(arr, size, 200);
	if (ans == -1)
	{
		cout << "Element Doesn't Exists in the given Array"
			 << "\n";
	}
	else
	{
		cout << "Element is present at " << ans << " Index"
			 << "\n";
	}
	return 0;
}