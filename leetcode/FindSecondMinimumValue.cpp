
/*
Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes.
Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.
If no such second minimum value exists, output -1 instead.

Example 1:
Input: 
    2
   / \
  2   5
     / \
    5   7
Output: 5
Explanation: The smallest value is 2, the second smallest value is 5.

Example 2:
Input: 
    2
   / \
  2   2
Output: -1
Explanation: The smallest value is 2, but there isn't any second smallest value.
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
 
    int findSecondMinimumValue(TreeNode* root) 
    {
        set<int>tree;   //Set containers are commonly used to store binary trees, You can get the information from this website http://www.cplusplus.com/reference/set/set/
        findsecmin(tree,root);
        if(tree.size()<2)
            return -1;
        else
            return *(++tree.begin());
        
    }
    void findsecmin(set<int>&tree,TreeNode* root)
    {
        if(root)   //Remember to judge isempty.
        {
            tree.insert(root->val);
            findsecmin(tree,root->left);
            findsecmin(tree,root->right);
            
        }
    }
