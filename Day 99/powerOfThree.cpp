// Leetcode 326. Power of Three

// Given an integer n, return true if it is a power of three. Otherwise, return false.

// An integer n is a power of three, if there exists an integer x such that n == 3x.

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        long ans=0;
        for(int i=0;i<=20;i++) {
            ans=pow(3,i);
            if(ans==n){
                return true;
                break;
            }
        
        }
        return false;
    }
};