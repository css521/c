
/*
Given a square array of integers A, we want the minimum sum of a falling path through A.

A falling path starts at any element in the first row, and chooses one element from each row.  The next row's choice must be in a column that is different from the previous row's column by at most one.

 

Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: 12
Explanation: 
The possible falling paths are:
[1,4,7], [1,4,8], [1,5,7], [1,5,8], [1,5,9]
[2,4,7], [2,4,8], [2,5,7], [2,5,8], [2,5,9], [2,6,8], [2,6,9]
[3,5,7], [3,5,8], [3,5,9], [3,6,8], [3,6,9]
The falling path with the smallest sum is [1,4,7], so the answer is 12.
*/


class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) 
    {
        vector<vector<int>>dp(A.size(),vector<int>(A[0].size(),0));
        for(int i=0;i<A[0].size();i++)dp[0][i]=A[0][i];
        for(int i=1;i<A.size();i++)
            for(int j=0;j<A[i].size();j++)
            {
                if(j==0)
                    dp[i][j]=min(dp[i-1][j]+A[i][j],dp[i-1][j+1]+A[i][j]);
                if(j==A[0].size()-1)
                    dp[i][j]=min(dp[i-1][j]+A[i][j],dp[i-1][j-1]+A[i][j]); 
                if(j>0&&j<A[0].size()-1)
                    dp[i][j]=min(dp[i-1][j]+A[i][j],min(dp[i-1][j-1]+A[i][j],dp[i-1][j+1]+A[i][j]));
            }
        return *min_element(dp[A.size()-1].begin(),dp[A.size()-1].end());
    }

};