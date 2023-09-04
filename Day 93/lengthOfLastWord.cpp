// Leetcode 58. Length of Last Word

// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,k,c=0;
        i = s.size()-1;
        while(i >= 0 && s[i] ==' ')
        i--;
        for(; i >= 0; i--){
            if(s[i] == ' ' && c != 0)
            return c;
            c++;
        }
        return c;
    }
};