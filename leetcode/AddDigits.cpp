
/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
*/

class Solution {
public:
    int res=0;
    int addDigits(int num) 
    {
        addc(num);
        return res;
    }
    void addc(int num)
    {
        int sum=0;
        while(num)
        {
          int tmp=num%10;
            sum+=tmp;
            num/=10;
        }
        if(sum<10)
        {   
            res=sum;
            return;
        }
        else
            addc(sum);
        
    }
};