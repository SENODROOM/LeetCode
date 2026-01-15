#include <iostream>
using namespace std;

/*
LeetCode 229: Majority Element II
Find all elements that appear more than n/3 times in the array.
Constraints:
- Only iostream is used (no STL vectors or maps)
- Input: array of integers and its size
- Output: print the majority elements
Algorithm:
We use the Boyer-Moore Voting Algorithm generalized for n/3.
There can be at most 2 elements that appear more than n/3 times.
*/

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array is empty." << endl;
        return 0;
    }

    int arr[200];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Step 1: Find potential candidates
    int candidate1 = 0, candidate2 = 1; // initialize differently to handle same numbers
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate1)
        {
            count1++;
        }
        else if (arr[i] == candidate2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            candidate1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0)
        {
            candidate2 = arr[i];
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify candidates
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate1)
            count1++;
        else if (arr[i] == candidate2)
            count2++;
    }

    cout << "Majority element(s) appearing more than n/3 times: ";
    bool found = false;
    if (count1 > n / 3)
    {
        cout << candidate1 << " ";
        found = true;
    }
    if (count2 > n / 3)
    {
        cout << candidate2 << " ";
        found = true;
    }
    if (!found)
        cout << "None";

    cout << endl;
    return 0;
}

/*
Example Input:
Enter the size of the array: 6
Enter 6 elements: 3 2 3 2 2 1

Output:
Majority element(s) appearing more than n/3 times: 2
*/
