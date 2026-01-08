#include <iostream>
using namespace std;

// Function to compute GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if partition is possible
bool hasGroupsSizeX(int deck[], int n) {
    int freq[10000] = {0}; // Frequency array for numbers 0 to 9999

    // Count the frequency of each number in the deck
    for (int i = 0; i < n; i++) {
        freq[deck[i]]++;
    }

    int currentGCD = 0;
    for (int i = 0; i < 10000; i++) {
        if (freq[i] > 0) {
            if (currentGCD == 0) {
                currentGCD = freq[i]; // first non-zero frequency
            } else {
                currentGCD = gcd(currentGCD, freq[i]); // compute GCD iteratively
            }
        }
    }

    // If GCD >= 2, partition is possible
    return currentGCD >= 2;
}

int main() {
    int n;
    cout << "Enter number of cards: ";
    cin >> n;

    int deck[200];
    cout << "Enter the card numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> deck[i];
    }

    if (hasGroupsSizeX(deck, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}







// Example 1:

// Input: deck = [1,2,3,4,4,3,2,1]
// Output: true
// Explanation: Possible partition [1,1],[2,2],[3,3],[4,4].
// Example 2:

// Input: deck = [1,1,1,2,2,2,3,3]
// Output: false
// Explanation: No possible partition.