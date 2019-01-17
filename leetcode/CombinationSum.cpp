
/*
Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
Example 2:

Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]
*/

class Solution {
public:
    vector<vector<int>>res;
    vector<int> temp;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
		dfs(candidates,target,0);
        return res;
    }
    void dfs(vector<int>& vec, int tmp,int index)
    {
        if(tmp==0)
        {
            res.push_back(temp);
            return ;
        }
        if(tmp<0)return;
        for(int i=index;i<vec.size();i++)//index is the starting position of recursion
        {
            if(vec[i]<=tmp)
			{
                temp.push_back(vec[i]);
                dfs(vec,tmp-vec[i],i);
                temp.pop_back();
            }
        }

    }
};