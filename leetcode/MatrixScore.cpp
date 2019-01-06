
/*
We have a two dimensional matrix A where each value is 0 or 1.
A move consists of choosing any row or column, and toggling each value in that row or column: changing all 0s to 1s, and all 1s to 0s.
After making any number of moves, every row of this matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
Return the highest possible score.


Example 1:
Input: [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
Output: 39
Explanation:
Toggled to [[1,1,1,1],[1,0,0,1],[1,1,1,1]].
0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39
*/

class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        int ans = (1 << (m - 1)) * n; //The first column of the matrix all is one.Work out the maximum
        for (int i = 1; i < m; i++)
        {
            int num = 0;
            for (int j = 0; j < n; j++)
              num += (A[j][i] == A[j][0]);
            ans += max(num,n - num) * (1 << (m - i - 1));  //The following ones are in units of each column.
        }
        return ans;
    }
};
 