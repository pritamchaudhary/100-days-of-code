// Leetcode 12. Integer to Roman

// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

            // Symbol       Value
            // I             1
            // V             5
            // X             10
            // L             50
            // C             100
            // D             500
            // M             1000

#include<iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int normal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i=0; i < 13; i++){
            while(num >= normal[i]){
                res.append(roman[i]);
                num-=normal[i];
            }
        }
        return res;
    }
};