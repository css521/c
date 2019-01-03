
/*
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
Note: A leaf is a node with no children.

Example:
Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \    / \
7    2  5   1
Return:

[
   [5,4,11,2],
   [5,8,4,5]
]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>vec;
    vector<int> temp;
    vector<vector<int>> pathSum(TreeNode* root, int sum) 
    {
		dps(root,sum);
        return vec;
    }
    void dps(TreeNode* root,int sum)
    {
        if(root==NULL)return ;
        temp.push_back(root->val);
        if(root->val == sum && root->right == NULL && root->left == NULL) 
           vec.push_back(temp);
        dps(root->left, sum-root->val);
        dps(root->right, sum-root->val);
        temp.pop_back();
    }
};