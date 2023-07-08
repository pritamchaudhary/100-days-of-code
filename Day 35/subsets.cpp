// Leetcode 78. Subsets

// Given an integer array nums of unique elements, return all possible subsets(the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums, output, index+1, ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;

    }
};