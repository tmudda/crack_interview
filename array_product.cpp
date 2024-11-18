/*
Given an integer array nums, return an array output where output[i] is the product of all the elements of nums except nums[i].
Each product is guaranteed to fit in a 32-bit integer.


Example 1:
Input: nums = [1,2,4,6]
Output: [48,24,12,8]

Example 2:
Input: nums = [-1,0,1,2,3]
Output: [0,-6,0,0,0]
Constraints:

2 <= nums.length <= 1000
-20 <= nums[i] <= 20
*/

#include "iostream"
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int product = 1, zeros = 0, zero_index = 0, single_product = 1;
        for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) {
                    zeros++;
                }
                product = product*nums[i];
            }
        if(zeros > 1) {
            iota(result.begin(), result.end(), 0);
        } else if(zeros == 1) {
            for(int i = 0 ; i < nums.size(); i++) {
                    if(nums[i] != 0)
                        single_product = single_product * nums[i];
                    else
                        zero_index = i;
            }
            for(int i = 0 ; i < nums.size(); i++){
                if(i == zero_index)
                    result[i] = single_product;
                else
                    result[i] = 0;
            }
        } else {
            for(int i = 0 ; i < nums.size(); i++){
                result[i] = product/nums[i];
            }
        }
        return result;

    }
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {1,2,4,6};
    vector<int> result;
    result = sol.productExceptSelf(nums);

    for(int i = 0; i < result.size(); i++)
    {
        std::cout<<result[i]<<" ";
    }
}
