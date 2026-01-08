#include <iostream>
#include <string>

using namespace std;

// Function to convert decimal integer to base 7
string decimalToBase7(int num) {
    if (num == 0) {
        return "0"; // Edge case for 0
    }

    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num; // Convert to positive for calculation
    }

    string base7 = "";

    // Generate base 7 digits
    while (num > 0) {
        int remainder = num % 7;                  // Get last digit
        base7 = static_cast<char>('0' + remainder) + base7; // Prepend digit
        num /= 7;                                 // Reduce number
    }

    // Add negative sign if needed
    if (isNegative) {
        base7 = "-" + base7;
    }

    return base7;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    string base7Number = decimalToBase7(number);
    cout << "Base 7 representation: " << base7Number << endl;

    return 0;
}
