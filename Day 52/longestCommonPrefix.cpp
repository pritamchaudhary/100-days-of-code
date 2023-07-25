// Leetcode 14. Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());
        int i = 0, j = 0;
        int n = strs.size();
        string s= "";

        while(i < strs[0].size() && j < strs[n-1].size()){
            if(strs[0][i] != strs[n-1][j]) 
                break;

            s+=strs[0][i];
            i++; j++;
        }
        return s;
    }
};