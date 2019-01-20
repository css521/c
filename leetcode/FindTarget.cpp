
/*
Given a Binary Search Tree and a target number, return true if there exist two elements in the BST such that their sum is equal to the given target.

Example 1:
Input: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 9

Output: True
Example 2:
Input: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 28

Output: False
*/

class Solution {
public:
    bool findTarget(TreeNode* root, int k) 
    {
        if (!root) return false;
        unordered_set<int> set;
        queue<TreeNode *> queue;
        queue.push(root);
        while (!queue.empty()) {
            TreeNode *top = queue.front();
            queue.pop();
            if (set.count(top->val)) return true;
            set.insert(k - top->val);
            if (top->left) queue.push(top->left);
            if (top->right) queue.push(top->right);
        }
        return false;
    }
};