

/*
Given a binary tree, find the length of the longest path where each node in the path has the same value. This path may or may not pass through the root.

Note: The length of path between two nodes is represented by the number of edges between them.

Example 1:
Input:

              5
             / \
            4   5
           / \   \
          1   1   5
Output:
2 5-5-5

Example 2:
Input:

              1
             / \
            4   5
           / \   \
          4   4   5
Output:
2  4-4-4
*/

class Solution {
public:
    int re = 0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root, 0);  //Depth-first search
        return re;
    }
    int dfs(TreeNode *node, int n) {
        if (node == nullptr)
			return 0;
		int left = dfs(node->left, node->val);
		int right = dfs(node->right, node->val);
		re = max(re, left + right);
		return node->val == n ? max(left, right) + 1 : 0;
    }
};