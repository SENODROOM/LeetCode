#include <iostream>
#include <string>

using namespace std;

int main()
{

    /*
        ==========================================
        LEETCODE 960 - DELETE COLUMNS TO MAKE SORTED II
        ==========================================

        RULES:
        - We are given N strings (rows)
        - Each string has M characters (columns)
        - We can delete columns
        - After deletions, rows must be lexicographically sorted
        - Goal: MINIMUM number of deletions
    */

    // -----------------------------
    // INPUT (Hardcoded for demo)
    // -----------------------------
    const int N = 2; // number of rows
    const int M = 5; // number of columns

    string strs[N] = {
        "babca",
        "bbazb"};

    /*
        ==========================================
        CORE IDEA (Dynamic Programming on Columns)
        ==========================================

        dp[i] = length of the longest valid column sequence
                that ends at column i

        We try to KEEP as many columns as possible.
        Answer = total columns - longest valid sequence
    */

    int dp[M];

    // Initialize dp: every column alone is valid
    for (int i = 0; i < M; i++)
    {
        dp[i] = 1;
    }

    // ---------------------------------
    // Build DP using nested loops
    // ---------------------------------
    for (int i = 0; i < M; i++)
    {

        // Compare column i with all previous columns j
        for (int j = 0; j < i; j++)
        {

            bool canExtend = true;

            // Check ordering for ALL rows
            for (int row = 0; row < N; row++)
            {
                if (strs[row][j] > strs[row][i])
                {
                    canExtend = false;
                    break;
                }
            }

            // If column j can come before i
            if (canExtend)
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    // ---------------------------------
    // Find longest valid column chain
    // ---------------------------------
    int longest = 0;
    for (int i = 0; i < M; i++)
    {
        if (dp[i] > longest)
        {
            longest = dp[i];
        }
    }

    // ---------------------------------
    // Minimum deletions
    // ---------------------------------
    int minDeletions = M - longest;

    // Output
    cout << "Minimum columns to delete: " << minDeletions << endl;

    /*
        ==========================================
        SAMPLE WALKTHROUGH
        ==========================================

        Input:
        ["babca",
         "bbazb"]

        Total columns = 5
        Longest valid column sequence = 2
        Answer = 5 - 2 = 3 ✔
    */

    return 0;
}
