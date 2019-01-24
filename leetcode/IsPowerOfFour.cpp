
/*

Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example 1:

Input: 16
Output: true
Example 2:

Input: 5
Output: false

*/

class Solution {
public:
    bool isPowerOfFour(int num) 
    {
     double n=log10(4),m=log10(num);
     return (m/n)==(int)(m/n);
    }
};