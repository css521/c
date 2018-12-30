
/*
Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle
[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]

The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).
*/

    int minimumTotal(vector<vector<int>>& triangle) //From bottom to top
    {
        
        for(int i=triangle.size()-2;i>=0;i--)
            for(int j=0;j<triangle[i].size();j++)
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
 
        return triangle[0][0];  //The results are stored in the triangle[0][0]
    }