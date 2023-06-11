// Leetcode 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};