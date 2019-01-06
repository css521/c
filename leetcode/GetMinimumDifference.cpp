
/*
Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.

Example:

Input:

   1
    \
     3
    /
   2

Output:
1

Explanation:
The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).
*/
class Solution {
public:
    int minDiff=INT_MAX;
    TreeNode* preNode =NULL;
    int getMinimumDifference(TreeNode* root) 
    {
        inOrder(root);
        return minDiff;
    }
    void inOrder(TreeNode* node) //The order traversal in the binary search tree is ascending order;
    {
        if(node==NULL) return ;
        inOrder(node->left);
        if(preNode!=NULL) minDiff=min(minDiff,node->val-preNode->val);
        preNode=node;   //Update the previous node
        inOrder(node->right);
        
    }
};
