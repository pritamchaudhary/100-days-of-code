// Leetcode 204. Count Primes
// Given an integer n, return the number of prime numbers that are strictly less than n.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};