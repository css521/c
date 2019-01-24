
/*

Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

class Solution {
public:
    int countPrimes(int n) 
    {
        if(n==0||n==1||n<0)return 0;
        int count=0;
        for(int j=2;j<n;j++)
            for(int i=2;i<=sqrt(j);i++)
                if(j%i==0)
                {
                    count++;
                    break;
                }
        
        return n-count-2;
    }
};