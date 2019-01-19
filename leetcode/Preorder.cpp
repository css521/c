
/*
iven an n-ary tree, return the preorder traversal of its nodes' values.

For example, given a 3-ary tree:

 



 

Return its preorder traversal as: [1,3,5,6,2,4].
*/

class Solution {
public:
    vector<int>res;
    vector<int> preorder(Node* root) 
    {
        mpreorder(root);
        return res;
    }
    void mpreorder(Node* root)
    {
        if(root)
        {
            res.push_back(root->val);
            for(int i=0;i<root->children.size();i++)
                mpreorder(root->children[i]);
        }
    }
};

 