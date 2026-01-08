#include <iostream>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
        return false;
    if (n == 1)
        return true;
    for (int i = 3; i <= n; i *= 3)
    {
        if (i == n)
            return true;
    }

    return false;
}

int main()
{
    int user;
    cout << "Enter the number: ";
    cin >> user;
    if (isPowerOfThree(user))
        cout << "true";
    else
        cout << "false";
}

// Example 1:

// Input: n = 27
// Output: true
// Explanation: 27 = 33
// Example 2:

// Input: n = 0
// Output: false
// Explanation: There is no x where 3x = 0.
// Example 3:

// Input: n = -1
// Output: false
// Explanation: There is no x where 3x = (-1).
 