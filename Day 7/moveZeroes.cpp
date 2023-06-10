// Leetcode 283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Brute force approach -> time complexity is O(2n)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> temp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }

        int nonZero = temp.size();
        for(int i=0; i<nonZero; i++){
            nums[i] = temp[i];
        }

        for(int i=nonZero; i<n; i++){
            nums[i] = 0;
        }
    }
};