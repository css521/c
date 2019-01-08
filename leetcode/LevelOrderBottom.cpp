
/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
*/
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)return res;
        queue<TreeNode*>tree;
        tree.push(root);
        while(!tree.empty())
        {
            vector<int>temp;
            int sz=tree.size();
            while(sz--)
            {
                TreeNode* top=tree.front();
                tree.pop();
                temp.push_back(top->val);
                if(top->left)tree.push(top->left);
                if(top->right)tree.push(top->right);
            }
            res.push_back(temp);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};