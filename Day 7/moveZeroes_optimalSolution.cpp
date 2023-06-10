// Leetcode 283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// optimal solution -> time complexity is O(n)

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // finding first zero occurrence
        int k = 0;
        int n = nums.size();
        while (k < n)
        {
            if (nums[k] == 0)
            {

                break;
            }
            else
            {
            k = k + 1;
            }
        }

        // finding zeros and immediate non-zero elements and swapping them
        int i = k, j = k + 1;

        while (i < n && j < n)
        {
            if (nums[j] != 0)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }

            j++;
        }
    }
};
