
/*
Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

Example 1:

Input: n = 12
Output: 3 
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.
*/

class Solution {
public:
    int numSquares(int n) 
    {
        vector<int>v(n+1,n);
        for(int i=1;i<=sqrt(n);++i)
             v[i*i]=1;
        for(int i=3;i<=n;++i)
            for(int j=1;j<i;++j)
              v[i]=min(v[i-j]+v[j],v[i]);
        
        return v[n];
    }
};