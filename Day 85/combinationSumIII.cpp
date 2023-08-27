// Leetcode 216. Combination Sum III

// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> ans; 
    void solve(vector<int>& v,int i, int n, int k, int s){
        if(s==0){
           if(k==0) ans.push_back(v);
            return;
        }
        if(i==n){
            return;
        }
        if(i<=s){
            v.push_back(i);
            solve(v,i+1, n, k-1, s-i );
            v.pop_back();
        }
        solve(v,i+1, n, k, s);

    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        solve(v, 1, 10, k ,n);
        return ans;
    }
};