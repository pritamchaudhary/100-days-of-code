// Leetcode 34. Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    int firstOccurrence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int first = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return first;
    }

    int lastOccurrence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int last = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        if(first == -1) return{-1, -1};
        int last = lastOccurrence(nums, target);
        return {first, last};
    }
};