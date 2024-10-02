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
	//	Task 3(1)
#include <iostream>
using namespace std;

int main() {
    int arr[5][4] = { {2,14,52,-5},
                    {16,2, 0, 12},
                    {17,12,4,3},
                    {22,17,91,1},
                    {8,6,-52,7} };
    int arr1S[4] = { 0 };
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 5; row++) {
            arr1S[col] += arr[row][col];  
        }
    }

    return 0;
}
	//Task 3(2)
#include <iostream>
using namespace std;

int main() {
	float arr[4][5] = { {6.7, 3.6, -4.5, 7.0, 4.1},
						{2.5, -4.2, 5.2, -8.2, 2.0},
						{-4.1, 3.5, -2.6, 9.0, -1.6},
						{-8.1, 6.2, 0.1, -5.3, 2.3} };

	float arr1[4];

	for (int row = 0; row < 5; row++) {
		float maxVal = arr[row][0];
		for (int col = 1; col < 4; col++) {
			if (arr[row][col] > maxVal) {
				maxVal = arr[row][col]; 
			}
		}
		arr1[row] = maxVal;
	}
	return 0;
}