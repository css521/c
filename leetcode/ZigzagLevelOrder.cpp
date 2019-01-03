
/*
Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its zigzag level order traversal as:
[
  [3],
  [20,9],
  [15,7]
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode *>q;
        q.push(root);
        int flag=1;
        while(!q.empty()){
            queue<TreeNode *>qt;
            vector<int>res;
            while(!q.empty()){
                TreeNode *t=q.front();q.pop();
                res.push_back(t->val);
                if(t->left)qt.push(t->left);
                if(t->right)qt.push(t->right);
            }
            if(flag<0)reverse(res.begin(),res.end());
            flag=-flag;
            ans.push_back(res);
            q=qt;
        }
        return ans;
    }
};