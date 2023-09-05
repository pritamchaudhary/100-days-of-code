// Leetcode 69. Sqrt(x)

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

#include<iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x == 0 || x == 1)
        return x;
        
        int s=0, e=x, mid=0;
        while(s < e){
            mid = s+(e-s)/2;
            if(x/mid >= mid)
            {
                ans = mid;
                s = mid+1;
            }
            else
            e = mid;
        }
        return ans;
    }
};