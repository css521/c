
/*
Given a binary search tree (BST) with duplicates, find all the mode(s) (the most frequently occurred element) in the given BST.

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than or equal to the node's key.
The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
Both the left and right subtrees must also be binary search trees.
 


For example:
Given BST [1,null,2,2],
   1
    \
     2
    /
   2
return [2].
*/

class Solution {
public:
    map<int,int>hash;
    vector<int>res;
    int max=0;
    vector<int> findMode(TreeNode* root) 
    {
        inorder(root);
        for(auto it:hash)
            if(it.second==max)
                res.push_back(it.first);
        return res;
    }
    void inorder(TreeNode* root)
    {
        if (root != nullptr)
        {
        inorder(root->left);
        hash[root->val]++; //Middle traversal of BST is Ascending order,Although it's not used.
        max=max>hash[root->val]?max:hash[root->val];
        inorder(root->right);
        }
    }
};


