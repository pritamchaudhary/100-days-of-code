// Leetcode 27. Remove Element

// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void swap(vector<int>& nums, int index1, int index2) {
        int temp = nums.at(index1);
        nums.at(index1) = nums.at(index2);
        nums.at(index2) = temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        int l_pnt = 0;
        int r_pnt = nums.size() - 1;
        while (l_pnt <= r_pnt) {
            if (nums.at(l_pnt) != val) {
                l_pnt++;
            }
            else if (nums.at(r_pnt) == val) {
                nums.at(r_pnt) = NULL;
                r_pnt--;
                count--;
            }
            else {
                nums.at(l_pnt) = NULL;
                swap(nums, l_pnt, r_pnt);
                l_pnt++;
                r_pnt--;
                count--;
            }
        }
        return count;
    }
};