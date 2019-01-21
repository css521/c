
/*

Given a binary tree, return the inorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2]
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>res;
        InOrder(root,res);
        return res;
    }
    void InOrder(TreeNode* root,vector<int>& res)
    {
        if(root==nullptr)return;
        InOrder(root->left,res);
        res.push_back(root->val);
        InOrder(root->right,res);
        
    }
};