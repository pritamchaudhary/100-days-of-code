// Leetcode 875. Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1;
        double sum;
        int ans;
        int r=INT_MIN;
        for(int i=0;i<n;i++)
            r=max(r,piles[i]);
        while(l<=r)
        {
            sum=0;
            int mid=l+(r-l)/2;
            for(int i=0;i<n;i++)
                sum+=ceil((double)piles[i]/mid);

            if(sum<=h)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};