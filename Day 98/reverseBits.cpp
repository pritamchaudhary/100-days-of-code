// Leetcode 190. Reverse Bits

// Reverse bits of a given 32 bits unsigned integer.

// Note:

// Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
// In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 2 above, the input represents the signed integer -3 and the output represents the signed integer -1073741825.

#include<iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string ans = "";
        while(n!=0){
            ans+=(n%2+'0');
            n/=2;
        }
        int x = 32-ans.size();
        while(x!=0){
            ans+='0';x--;
        }
        int i=ans.size()-1;
        int j=0;
        uint32_t sum=0;
        while(i>=0){
            sum+=((ans[i]-'0')*pow(2,j++));
            i--;
        }
        return sum;
    }
};