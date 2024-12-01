/**Given an array arr[] of n integers and a target value, the task is to find whether there is a pair of elements in the array whose sum is equal to target. This problem is a variation of 2Sum problem.

Examples: 

Input: arr[] = {0, -1, 2, -3, 1}, target = -2
Output: True
Explanation: There is a pair (1, -3) with the sum equal to given target, 1 + (-3) = -2


Input: arr[] = {1, -2, 1, 0, 5}, target = 0
Output: False
There is no pair with sum equals to given target.
**/

#include <bits/stdc++.h>
using namespace std;
string twoSum(vector<int> book, int target)
{
    int reminder;
    unordered_set<int> mySet;
    int len = book.size();

    for(int i = 0; i < n; i++)
    {
        reminder = target - book[i];
        
        if(mySet.find(reminder) != mySet.end())
        {
            return "YES";
        }
        mySet.insert(book[i]);  
    }

    return "NO";
}

int main()
{
  vector<int> arr = {1, -2, 1, 0, 5};
  int target = 0;
  // Call the twoSum function and print the result
  if (twoSum(arr, target))
      cout << "true";
  else
      cout << "false";

    return 0;

}
