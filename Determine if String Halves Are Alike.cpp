#include <iostream>
#include <string>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c) {
    // Convert uppercase letters to lowercase for uniform comparison
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A'); // convert to lowercase
    }
    // Check if the character is a vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to determine if two halves of the string are alike
bool halvesAreAlike(string s) {
    int n = s.length();
    int half = n / 2;

    int countFirst = 0;  // vowels in first half
    int countSecond = 0; // vowels in second half

    // Count vowels in the first half
    for (int i = 0; i < half; i++) {
        if (isVowel(s[i])) {
            countFirst++;
        }
    }

    // Count vowels in the second half
    for (int i = half; i < n; i++) {
        if (isVowel(s[i])) {
            countSecond++;
        }
    }

    // Check if counts are equal
    return countFirst == countSecond;
}

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    if (halvesAreAlike(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
