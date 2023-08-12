// Leetcode 796. Rotate String

// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.

#include<iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int k=s.size();
        while(k--)
        {
            char ch=s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if(s==goal)
                return true;
        }
        return false;
    }
};