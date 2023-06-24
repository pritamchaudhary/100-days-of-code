// Leetcode 229. Majority Element II
// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
// better approach

#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ls; // list of answers

        //declaring a map:
        map<int, int> mpp;

        // least occurrence of the majority element:
        int mini = int(n / 3) + 1;

        //storing the elements with its occurnce:
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;

            //checking if nums[i] is the majority element:
            if (mpp[nums[i]] == mini) {
                ls.push_back(nums[i]);
            }
            if (ls.size() == 2) break;
        }

        return ls;
    }
};