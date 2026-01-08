#include <iostream>
using namespace std;
int FourDivisors(int arr[], int size)
{
    int result=0;
    for (int i = 0; i < size; i++)
    {
        int count=0;
        int temp=arr[i]+1;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i]%j==0){
                count++;
                temp+=j;
            }
        }
        if (count==2)
            result+=temp;
    }
    return result;
}
int main()
{
    int arr[100];
    int user;
    cout << "Enter size of the array: ";
    cin >> user;
    for (int i = 0; i < user; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout<<FourDivisors(arr,user);
}

// Example 1:

// Input: nums = [21,4,7]
// Output: 32
// Explanation: 
// 21 has 4 divisors: 1, 3, 7, 21
// 4 has 3 divisors: 1, 2, 4
// 7 has 2 divisors: 1, 7
// The answer is the sum of divisors of 21 only.
// Example 2:

// Input: nums = [21,21]
// Output: 64
// Example 3:

// Input: nums = [1,2,3,4,5]
// Output: 0