// Leetcode 1283. Find the Smallest Divisor Given a Threshold

// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// The test cases are generated so that there will be an answer.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    int sumByD(vector<int>& nums, int div){
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum = sum + ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = (low + high)/2;
            if(sumByD(nums, mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};