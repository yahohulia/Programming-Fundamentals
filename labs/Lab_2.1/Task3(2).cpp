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
