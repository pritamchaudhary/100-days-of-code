// Leetcode 67. Add Binary

// Given two binary strings a and b, return their sum as a binary string.

#include<iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length()){
            reverse(a.begin(), a.end());
            while(a.length() != b.length()){
                a+='0';
            }
            reverse(a.begin(), a.end());
            }
            else if(b.length() < a.length()){
                reverse(b.begin(), b.end());
                while(a.length() != b.length()){
                b += '0';
            }
            reverse(b.begin(), b.end());
            }
            int carry=0;
            string ans;
            for(int i=a.length()-1; i>=0; i--){
                if(a[i] == '1' && b[i] == '1'){
                    carry += 1;
                    if(carry == 2){
                        ans += '1';
                        carry--;
                    }
                    else{
                        ans += '0';
                    }
                }
                else if(a[i] == '0' && b[i] == '0'){
                    if(carry >= 1){
                        carry--;
                        ans += '1';
                    }
                    else{
                        ans += '0';
                    }
                }
                else{
                    if(carry >= 1){
                        ans += '0';
                    }
                    else{
                        ans += '1';
                    }
                }
            }
            if(carry > 0){
                ans += '1';
            }
            reverse(ans.begin(), ans.end());
    return ans;
    }
};