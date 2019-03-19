
/*
Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder traversal displays the value of the node first, then traverses node.left, then traverses node.right.)

 

Example 1:

Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]

*/

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& a) {
        int n = a.size();
        if (n == 0) return NULL;
        TreeNode *it = new TreeNode(a[0]);
        vector<int> L, R;
        for (auto x : a)
        {
            if (x < a[0]) L.push_back(x);
            if (x > a[0]) R.push_back(x);
        }
        it->left = bstFromPreorder(L);
        it->right = bstFromPreorder(R);
        return it;
    }
};