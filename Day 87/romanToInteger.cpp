// Leetcode 13. Roman to Integer

// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

        // Symbol       Value
        // I             1
        // V             5
        // X             10
        // L             50
        // C             100
        // D             500
        // M             1000

#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int ans =0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]])
                ans-=mp[s[i]];
            else
                ans+=mp[s[i]];
        }
        return ans;
    }
};
