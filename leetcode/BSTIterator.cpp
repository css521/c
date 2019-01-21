
/*
Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

Calling next() will return the next smallest number in the BST.

 

Example:



BSTIterator iterator = new BSTIterator(root);
iterator.next();    // return 3
iterator.next();    // return 7
iterator.hasNext(); // return true
iterator.next();    // return 9
iterator.hasNext(); // return true
iterator.next();    // return 15
iterator.hasNext(); // return true
iterator.next();    // return 20
iterator.hasNext(); // return false

https://leetcode-cn.com/problems/binary-search-tree-iterator/
*/

class BSTIterator {
public:
    vector<int>res;
    int i=0;
    BSTIterator(TreeNode* root) 
    {
        InOrder(root);
    }
    
    void InOrder(TreeNode* root)
    {
        if(root==nullptr)return;
        InOrder(root->left);
        res.push_back(root->val);
        InOrder(root->right);
    }
    /** @return the next smallest number */
    int next() 
    {
        return res[i++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() 
    {
        if(i==res.size())
            return false;
        return true;
    }
};
