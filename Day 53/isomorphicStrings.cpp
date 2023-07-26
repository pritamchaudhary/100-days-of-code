// Leetcode 205. Isomorphic Strings

// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[200] = {};
        int arr2[200] = {};
        int len = s.size();

        for (int i = 0;i<len;i++){
            char n1 = s[i];
            char n2 = t[i];

            if(arr1[n1]!=arr2[n2]){
                return false;
            }
            arr1[n1] = i+1;
            arr2[n2] = i+1;
        }
        return true;
    }
};