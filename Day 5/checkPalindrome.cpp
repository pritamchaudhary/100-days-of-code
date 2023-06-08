// Leetcode 9. Palindrome Number
// Given an integer x, return true if x is a palindrome, and false otherwise.

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        temp = x;
        int digit =0;
        long rev = 0;

        if(x < 0){
            return 0;
        }

        while(x > 0){
            digit = x % 10;
            rev = (rev * 10) + digit;
            x =(x/10);
        }
        if(rev == temp){
            return 1;
        }else{
            return 0;
        }
    }
};