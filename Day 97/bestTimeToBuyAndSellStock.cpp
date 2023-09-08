// Leetcode 121. Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
        return 0;
        int curr = 0;
        int mini = prices[0];
        int profit = 0, maxi = 0;
        for(auto i : prices)
        {
            mini = min(mini,i);
            profit = i-mini;
            maxi = max(maxi,profit);
        }
        return maxi;
    }
};