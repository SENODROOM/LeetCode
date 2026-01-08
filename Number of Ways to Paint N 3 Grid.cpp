#include <iostream>
using namespace std;

/*
    Function: numOfWays
    -------------------
    This function calculates the number of valid ways to paint
    an n x 3 grid using dynamic programming.

    Parameters:
        n -> number of rows in the grid

    Returns:
        Total number of valid colorings modulo 1e9 + 7
*/
long long numOfWays(int n)
{

    // Modulo constant (required by problem)
    const long long MOD = 1000000007;

    /*
        same:
            Number of ways where the last painted row
            follows ABA pattern (1st and 3rd same)

        diff:
            Number of ways where the last painted row
            follows ABC pattern (all different)
    */

    long long same = 6; // For row 1
    long long diff = 6; // For row 1

    /*
        If there is only 1 row,
        total ways = same + diff
    */
    if (n == 1)
    {
        return (same + diff) % MOD;
    }

    /*
        Build the solution row by row
        starting from row 2 up to row n
    */
    for (int row = 2; row <= n; row++)
    {

        // Store previous values before updating
        long long prevSame = same;
        long long prevDiff = diff;

        /*
            Transition explanation:

            From prevSame (ABA):
                - 3 ways to create new SAME
                - 2 ways to create new DIFF

            From prevDiff (ABC):
                - 2 ways to create new SAME
                - 2 ways to create new DIFF
        */

        long long newSame = (prevSame * 3 + prevDiff * 2) % MOD;
        long long newDiff = (prevSame * 2 + prevDiff * 2) % MOD;

        // Update values for next iteration
        same = newSame;
        diff = newDiff;
    }

    // Final answer
    return (same + diff) % MOD;
}

/*
    Main function
    -------------
    Used for input/output and calling numOfWays
*/
int main()
{

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    long long result = numOfWays(n);

    cout << "Number of ways to paint the grid: " << result << endl;

    return 0;
}
