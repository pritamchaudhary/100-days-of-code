// Leetcode 704. Binary Search
// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    int binarySearch(vector<int>& arr , int s, int e, int key){
    // base case
    // element not found
    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;

    // element found
    if(arr[mid] == key){ 
        return mid;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}
public:
    int search(vector<int>& nums, int target) {
        int ans = binarySearch(nums, 0, nums.size()-1, target);
        return ans;
    }
};