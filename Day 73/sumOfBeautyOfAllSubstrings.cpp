// Leetcode 1781. Sum of Beauty of All Substrings

// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int l,m;
        unordered_map<char,int> umap;
        int res=0;
        for(int i=0;i<s.length();i++){
            umap.clear();
            for(int j=i;j<s.length();j++){
                umap[s[j]]++;
                if(j-i>1){
                    m=0;
                    l=INT_MAX;
                    for(auto i : umap){
                        m = max(i.second,m);
                        l = min(i.second,l);
                    }
                    res+=m-l;
                }
            }
        }
        return res;
    }
};