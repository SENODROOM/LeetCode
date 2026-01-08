#include <iostream>
using namespace std;

/*
    Function: maxDotProduct
    Purpose:
        Finds the maximum dot product of two NON-EMPTY subsequences
        from nums1 and nums2.

    Restrictions satisfied:
    - No vectors
    - No <climits>
    - Uses raw arrays only
*/

int maxDotProduct(int nums1[], int n, int nums2[], int m)
{
    // Since we cannot use INT_MIN, define a very small number manually
    int NEG_INF = -1000000000;

    /*
        dp[i][j] means:
        Maximum dot product using
        nums1[0..i-1] and nums2[0..j-1]
        while choosing AT LEAST ONE PAIR
    */

    int dp[501][501];

    // Initialize DP table with NEG_INF
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = NEG_INF;
        }
    }

    // Fill DP table
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // Product of current elements
            int product = nums1[i - 1] * nums2[j - 1];

            /*
                Option 1:
                Start a new subsequence with only this pair
            */
            int option1 = product;

            /*
                Option 2:
                Extend previous subsequence
            */
            int option2 = product;
            if (dp[i - 1][j - 1] != NEG_INF)
            {
                option2 = product + dp[i - 1][j - 1];
            }

            /*
                Option 3:
                Skip current element of nums1
            */
            int option3 = dp[i - 1][j];

            /*
                Option 4:
                Skip current element of nums2
            */
            int option4 = dp[i][j - 1];

            /*
                Take maximum manually (no std::max required)
            */
            int best = option1;
            if (option2 > best)
                best = option2;
            if (option3 > best)
                best = option3;
            if (option4 > best)
                best = option4;

            dp[i][j] = best;
        }
    }

    return dp[n][m];
}

int main()
{
    /*
        Example:
        nums1 = [2, 1, -2, 5]
        nums2 = [3, 0, -6]

        Best subsequence:
        (2, -2) and (3, -6)
        Dot product = 2*3 + (-2)*(-6) = 18
    */

    int nums1[] = {2, 1, -2, 5};
    int nums2[] = {3, 0, -6};

    int n = 4;
    int m = 3;

    int result = maxDotProduct(nums1, n, nums2, m);

    cout << "Maximum Dot Product: " << result << endl;

    return 0;
}
