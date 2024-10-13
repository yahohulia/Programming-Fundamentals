	// Variant 3
	// Task 1
#include <iostream>

int main() {
	int arr1[11];

		for (int i = 0; i < 11; i++)
		{
			if (i % 2 == 0)
			{
				arr1[i] = i + 5;
			}
			else
			{
				arr1[i] = 2 * i + 3;
			}
		}
		int size = 11;

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr1[j] > arr1[j + 1])
				{
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
				}
			}
		}
		return 0;
}
