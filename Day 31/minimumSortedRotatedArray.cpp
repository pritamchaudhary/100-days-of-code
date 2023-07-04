// Leetcode 153. Find Minimum in Rotated Sorted Array
// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
            // [4,5,6,7,0,1,2] if it was rotated 4 times.
            // [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            //search space is already sorted then arr[low] will always be
            //the minimum in that search space:
            if (nums[low] <= nums[high]) {
                ans = min(ans, nums[low]);
                break;
            }

            //if left part is sorted:
            if (nums[low] <= nums[mid]) {
                // keep the minimum:
                ans = min(ans, nums[low]);

                // Eliminate left half:
                low = mid + 1;
            }
            else { //if right part is sorted:

                // keep the minimum:
                ans = min(ans, nums[mid]);

                // Eliminate right half:
                high = mid - 1;
            }
        }
        return ans;
    }
};