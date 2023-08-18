// Leetcode 451. Sort Characters By Frequency

// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

// Return the sorted string. If there are multiple answers, return any of them. 

#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char _s: s) m[_s]++;
        vector<pair<int,char>> v;
        for(auto _m: m) v.push_back({_m.second,_m.first});
        sort(rbegin(v),rend(v));
        s.clear();
        for(auto _v: v) s += string(_v.first,_v.second);
        return s;
    }
};