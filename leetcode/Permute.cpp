
/*
Given a collection of distinct integers, return all possible permutations.

Example:

Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
*/

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return res;
    }
    
    void dfs(vector<int>& nums, int begin) {
        if (begin == nums.size() -1) 
            res.push_back(nums);
        for (int i = begin; i < nums.size(); i++) {
            swap(nums[begin], nums[i]);
            dfs(nums, begin + 1);
            swap(nums[begin], nums[i]);
        }
        return;
    }
};