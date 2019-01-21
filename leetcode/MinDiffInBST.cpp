
/*
Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree.

Example :

Input: root = [4,2,6,1,3,null,null]
Output: 1
Explanation:
Note that root is a TreeNode object, not an array.

The given tree [4,2,6,1,3,null,null] is represented by the following diagram:

          4
        /   \
      2      6
     / \    
    1   3  

while the minimum difference in this tree is 1, it occurs between node 1 and node 2, also between node 3 and node 2.
*/

class Solution {
public:
    int res=INT_MAX;
    TreeNode* pre=NULL;
    int minDiffInBST(TreeNode* root) 
    {
        inorder(root);
        return res;
    }
    void inorder(TreeNode* root)
    {
        
        if(root==nullptr)return;
        inorder(root->left);
        if(pre!=NULL)res=min(res,root->val-pre->val);//The Middle order traversal of binary search Tree is Ascending order
        pre=root;
        inorder(root->right);
    }
};