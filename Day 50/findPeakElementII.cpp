// Leetcode 1901. Find a Peak Element II

// A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

// Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

// You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

// You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int i=0,j=n-1;
        while(i<=j){
            int mid = (i+j)/2;

            int x = -1;
            int ind = -1;
            for(int k=0;k<mat[mid].size();k++){
                if(x < mat[mid][k]){
                    x = mat[mid][k];
                    ind = k;
                }
            }
            
            if(mid == 0){
                if(x > mat[mid+1][ind])
                    return {mid,ind};
                else
                    i = mid+1;
            }
            else if(mid == n-1){
                if(x > mat[mid-1][ind])
                    return {mid,ind};
                else
                    j = mid-1;
            }
            else{
                if(x > mat[mid-1][ind] && x > mat[mid+1][ind])
                    return {mid,ind};
                else if(x > mat[mid-1][ind])
                    i = mid+1;
                else
                    j = mid-1;
            }
        }
        return {-1,-1};
    }
};