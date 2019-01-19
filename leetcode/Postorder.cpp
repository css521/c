

/*
Given an n-ary tree, return the postorder traversal of its nodes' values.

For example, given a 3-ary tree:

 
Return its postorder traversal as: [5,6,3,2,4,1].

https://leetcode-cn.com/problems/n-ary-tree-postorder-traversal/
*/

class Solution {
public:
    vector<int>res;
    vector<int> postorder(Node* root) 
    {
        postorde(root); 
        return res;
    }
    void postorde(Node* root)
    {
        if(root)
        {
            for(int i=0;i<root->children.size();i++)
                postorde(root->children[i]);
            res.push_back(root->val);
        }
    }
};