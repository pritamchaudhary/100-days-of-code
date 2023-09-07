// Leetcode 70. Climbing Stairs

// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;

class Solution {
public:
    int solve(int n){
        if(n <= 2)
            return n;
        int prev1 = 2;
        int prev2 = 1;
        int curr;
        for(int i = 3; i <= n; i++){
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }     
        return curr;
    }
    int climbStairs(int n) {
        return solve(n);
    }
};