
/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.

Example:

Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
*/
 */
 
class Solution {
public:
    int temp;
    bool hasPathSum(TreeNode* root, int sum)
    {  
        if(root==NULL)
			return false;
        find(root,sum);
        return temp;
    }
    void find(TreeNode* root,int sum)//It's too much trouble.
    {
        if(root==NULL)
			return ;
        if(root->val == sum && root->right == NULL && root->left == NULL) 
            temp=1;
        find(root->left,sum-root->val);
        find(root->right,sum-root->val);
    }
        
};