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
