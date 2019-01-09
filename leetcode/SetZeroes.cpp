
/*
Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

Example 1:

Input: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
Example 2:

Input: 
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
Output: 
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<int>col;
        vector<int>row;
        vector<int>::iterator it; 
        vector<int>::iterator it1; 
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    col.push_back(i);
                    row.push_back(j);
                }
            }
        for(int i=0;i<matrix.size();i++)
        {
                it=find(col.begin(),col.end(),i);
                if(it!=col.end())
                {
                    for(int j=0;j<matrix[i].size();j++)
                        matrix[i][j]=0;
                }
        }
        for(int j=0;j<matrix[0].size();j++)
        {
                it1=find(row.begin(),row.end(),j);
                if(it1!=row.end())
                {
                    for(int i=0;i<matrix.size();i++)
                        matrix[i][j]=0;
                }
        }
    }
};