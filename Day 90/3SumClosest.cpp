// Leetcode 16. 3Sum Closest

// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0]+nums[1]+nums[nums.size()-1];
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int point1 = i+1;
            int point2 = nums.size()-1;
            
            while(point1<point2)
            {
                int sum = nums[i]+nums[point1]+nums[point2];
                
                if(sum>target) point2-=1;
                else point1+=1;
                
                if(abs(res-target)>abs(sum-target)) res = sum;
            }
        }
        return res;
    }
};