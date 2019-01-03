
/*
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000
Output: 1
Example 2:

Input:
11000
11000
00100
00011
Output: 3
*/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
            if(grid[i][j] >= '1')
            {
                    count ++;
                    dfs(grid, i, j);
            }

        return count;
    }
    void dfs(vector<vector<char>>& grid, int i, int j)  //changge the island to the water 
    {
        if(i >= grid.size() || i < 0 || j < 0 || j >= grid[0].size() || grid[i][j] != '1') 
            return;
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i - 1, j);
        dfs(grid, i, j - 1);
    }
};