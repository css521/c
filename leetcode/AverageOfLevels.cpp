
/*
Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.
Example 1:
Input:
    3
   / \
  9  20
    /  \
   15   7
Output: [3, 14.5, 11]
Explanation:
The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].
*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>>res;
        vector<double>re;
        double tmp=0;
        if(root==NULL)return re;
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
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<res[i].size();j++)
            {
                tmp+=res[i][j];
            }
            re.push_back(tmp/res[i].size());
            tmp=0;
        }
        return re;
    }
};