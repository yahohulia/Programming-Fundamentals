    // Task 1
#include <iostream>
using namespace std;

int main() {
    int choice, n, i;

    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0) {
        cout << n << " is a positive number." << endl;
    }
    else if (n < 0) {
        cout << n << " is a negative number." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    cout << "Select an action (1 - Addition, 2 - Subtraction, 3 - Multiplication): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "You have selected an addition." << endl;
        break;
    case 2:
        cout << "You have chosen subtraction." << endl;
        break;
    case 3:
        cout << "You have chosen multiplication." << endl;
        break;
    default:
        cout << "Wrong choice." << endl;
        break;
    }

    cout << "Print the numbers from 1 to 5:" << endl;
    for (i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Enter a number to test the while loop (less than 5): ";
    cin >> n;
    while (n < 5) {
        cout << "Number " << n << " less than 5." << endl;
        n++;
    }

    cout << "Enter a number for the do-while loop (greater than 10): ";
    cin >> n;
    do {
        cout << "Number: " << n << endl;
        n--;
    } while (n > 10);

    return 0;
}
    // Task 2(1)
#include <iostream>
using namespace std;

int main() {
    int n;
    char choice;

    do {
        cout << "Enter an integer: ";
        cin >> n;

        if (n % 2 == 0) {
            cout << n << " is an even number." << endl;
        }
        else {
            cout << n << " is an odd number." << endl;
        }

        cout << "Want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
    // Task 2(2)
#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (n > 0) {
        if (n & 1) { 
            count++;
        }
        n = n >> 1;
    }

    cout << "The number of single bits: " << count << endl;

    return 0;
}
    // Task 2(3)
#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int position;
    char choice;

    do {
        cout << "Enter an integer: ";
        cin >> n;
        cout << "Enter the bit position to check (starts from 0): ";
        cin >> position;

        if (n & (1 << position)) {
            cout << "Bit in position " << position << " set (1)." << endl;
        }
        else {
            cout << "Bit in position " << position << " not set (0)." << endl;
        }

        cout << "Want to check another position or number?(y/n) ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');  

    return 0;
}
