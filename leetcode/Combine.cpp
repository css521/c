
/*
Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

Example:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
*/

class Solution {
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>res;
        vector<int>temp;
        find(res,temp,n,k,0);
        return res;
    }
    void find(vector<vector<int>>& res,vector<int>& temp,int n,int k,int idx)
    {
        if(temp.size()==k)
        {
            res.emplace_back(temp);
            return;
        }
        for(int i=idx+1;i<=n;i++)
        {
            temp.emplace_back(i);
            find(res,temp,n,k,i);
            temp.pop_back();
        }
        return;
    }
};