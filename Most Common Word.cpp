#include <iostream>
#include <string>
using namespace std;

///////////////////////// FUNCTION TO CONVERT STRING TO LOWERCASE /////////////////////////
string toLowerCase(string s)
{
    // ========================
    // This function takes a string as input and converts all uppercase letters
    // to lowercase letters. This is important because in LeetCode 819,
    // words are case-insensitive, so "Bob" and "bob" should be treated as the same.
    // ========================
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a'; // ASCII conversion from uppercase to lowercase
        }
    }
    return s;
}

///////////////////////// FUNCTION TO CHECK IF CHARACTER IS ALPHABET /////////////////////////
bool isAlpha(char c)
{
    // ========================
    // This function checks if a given character is an alphabet letter (a-z or A-Z).
    // In LeetCode 819, we need to ignore punctuation characters like '!', '?', etc.
    // So we only consider letters as part of words.
    // ========================
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

///////////////////////// FUNCTION TO FIND MOST COMMON WORD /////////////////////////
string mostCommonWord(string paragraph, string banned[], int bannedSize)
{
    // ========================
    // This function returns the most frequent word in the paragraph
    // that is NOT in the banned list.
    // ========================

    // ========================
    // Step 1: Convert entire paragraph to lowercase for case-insensitive comparison
    // ========================
    paragraph = toLowerCase(paragraph);

    // ========================
    // Step 2: Extract words from the paragraph
    // We will build words character by character.
    // Whenever we hit a non-alphabet character, we finish the current word.
    // ========================
    string words[1000]; // Array to store words (assume max 1000 words for simplicity)
    int wordCount = 0;  // Number of words found
    string currentWord = "";

    for (int i = 0; i < paragraph.length(); i++)
    {
        if (isAlpha(paragraph[i]))
        {
            currentWord += paragraph[i]; // Append character to current word
        }
        else
        {
            if (currentWord != "")
            {
                words[wordCount++] = currentWord; // Store completed word
                currentWord = "";                 // Reset current word
            }
        }
    }
    // Add last word if paragraph ends with a letter
    if (currentWord != "")
    {
        words[wordCount++] = currentWord;
    }

    // ========================
    // Step 3: Count frequency of each word excluding banned words
    // We will use two arrays: one for unique words, one for their counts
    // ========================
    string uniqueWords[1000]; // Array to store unique words
    int counts[1000] = {0};   // Array to store word frequencies
    int uniqueCount = 0;      // Number of unique words

    for (int i = 0; i < wordCount; i++)
    {
        // ========================
        // Check if the current word is banned
        // ========================
        bool bannedWord = false;
        for (int j = 0; j < bannedSize; j++)
        {
            if (words[i] == banned[j])
            {
                bannedWord = true;
                break;
            }
        }
        if (bannedWord)
            continue; // Skip banned words

        // ========================
        // Check if the word is already in uniqueWords array
        // If yes, increment its count
        // If no, add it to uniqueWords and set count to 1
        // ========================
        bool found = false;
        for (int j = 0; j < uniqueCount; j++)
        {
            if (uniqueWords[j] == words[i])
            {
                counts[j]++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            uniqueWords[uniqueCount] = words[i];
            counts[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // ========================
    // Step 4: Find the word with the maximum frequency
    // ========================
    int maxIndex = 0;
    for (int i = 1; i < uniqueCount; i++)
    {
        if (counts[i] > counts[maxIndex])
        {
            maxIndex = i;
        }
    }

    return uniqueWords[maxIndex]; // Return the most frequent non-banned word
}

///////////////////////// MAIN FUNCTION /////////////////////////
int main()
{
    // ========================
    // Test the function with sample input
    // ========================
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    string banned[] = {"hit"};
    int bannedSize = 1;

    string result = mostCommonWord(paragraph, banned, bannedSize);
    cout << "Most common word: " << result << endl;

    // Expected Output: "ball"
    return 0;
}
