// Leetcode 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        vector<int> sCount(26,0), tCount(26,0);

        for(int i=0; i<s.length(); i++){
            sCount[s[i] - 'a']++, tCount[t[i] - 'a']++; 
        }
        if(sCount == tCount)
            return true;
        return false;
    }
};