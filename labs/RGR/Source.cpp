#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool ValidString(const string& str) {
    int n = str.length();
    if (n < 5) return false;

    if (str[0] != '~' || str[n - 1] != '~') return false;

    int i = 1;
  
    while (i < n && isdigit(str[i])) {
        i++;
    }

    if (str[i] != '&' && str[i] != '*') return false;
    i++;

    while (i < n - 1 && isupper(str[i])) {
        i++;
    }

    return i == n - 1 && str[i] == '~';
}

int main() {
   string input;
   cout << "Enter the string: ";
   cin >> input;

    if (ValidString(input)) {
        cout << "The string belongs to the language L(V)." << endl;
    }
    else {
        cout << "String does not belong to the language L(V)." << endl;
    }

    return 0;
}
