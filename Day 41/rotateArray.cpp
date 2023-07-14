// Leetcode 189. Rotate Array

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size(); i++){
            temp[(i+k) % nums.size()] = nums[i];
        }
        // copy temp into nums vector
        nums = temp;
    }
};