#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int size)
{

	for (int i = 1; i < size; i++)
	{
		int temp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;
	}
}

int main()
{
	int size = 10;
	int arr[size] = {5, 8, 9, 10, 11, 15, 20, 100, 120, 200};

	insertion_sort(arr, size);

	cout << "Sorted Array is"
		 << "\n";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}
	return 0;
}