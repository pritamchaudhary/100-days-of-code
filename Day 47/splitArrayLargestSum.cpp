// Leetcode 410. Split Array Largest Sum

// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

class Solution {
private:
    int countPartitions(vector<int> &nums, int maxSum) {
    int n = nums.size(); //size of array.
    int partitions = 1;
    long long subarraySum = 0;
    for (int i = 0; i < n; i++) {
        if (subarraySum + nums[i] <= maxSum) {
            //insert element to current subarray
            subarraySum += nums[i];
        }
        else {
            //insert element to next subarray
            partitions++;
            subarraySum = nums[i];
        }
    }
    return partitions;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        //Apply binary search:
        while (low <= high) {
            int mid = (low + high) / 2;
            int partitions = countPartitions(nums, mid);
            if (partitions > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};