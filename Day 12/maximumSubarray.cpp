
//Leetcode 53. Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum. 

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int  sum = 0; 
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            sum += nums[i];

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};