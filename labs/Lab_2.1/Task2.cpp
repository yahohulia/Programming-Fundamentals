	// Task 2

#include <iostream>
using namespace std;

int main() {
	int arr1[10];
	int arr2[10];
	int arr3[10];

	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 55 - 2 * i;
	}
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = 40 + 3 * i;
	}

	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[k] = arr1[i];
				 k++;
			 break;
			}

		}

	}
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	int totalSize = size1 + size2;

	int sum = 0;

	for (int i = 0; i < size1; i++) {
		sum += arr1[i];
	}

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
	}

	double average = static_cast<double>(sum) / totalSize;

	return 0;
}
