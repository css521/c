
/*
You need to find the largest value in each row of a binary tree.

Example:
Input: 

          1
         / \
        3   2
       / \   \  
      5   3   9 

Output: [1, 3, 9]
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
    vector<int> largestValues(TreeNode* root) 
    {
        vector<int>res;
        queue<TreeNode*>qu;
        if(root==nullptr)return res;
     
        qu.push(root);
        while(!qu.empty())
        {
            int size=qu.size();
            int maxc=INT_MIN;
            while(size--)
            {
                TreeNode* temp=qu.front();
                maxc=max(maxc,temp->val);
                qu.pop();
                if(temp->left)qu.push(temp->left);
                if(temp->right)qu.push(temp->right);
            }
            res.push_back(maxc);
        }
        return res;
        
    }
};