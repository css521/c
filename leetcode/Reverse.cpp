
/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
*/

class Solution {
public:
    int reverse(int x) {
        const int min32 = 0x80000000;
        const int max32 = 0x7fffffff;
        long long result = 0;
        for(;x != 0;){
            result = result * 10 + x % 10;
            x = x/10;
        }
        if(result < min32 || result > max32){
            return 0;
        }
        return result;
    }
};