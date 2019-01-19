/*
Given an n-ary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example, given a 3-ary tree:

 



 

We should return its level order traversal:

[
     [1],
     [3,2,4],
     [5,6]
]
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        if(root==nullptr)return {};
        vector<vector<int>>res;
        queue<Node*>qu;
        Node* p=root,*pre=root;
        qu.push(root);
        while(!qu.empty())
        {
            vector<int>vec;
            int size=qu.size();
            while(size--)
            {
                Node* temp=qu.front();
                qu.pop();
                vec.push_back(temp->val);
                for(int i=0;i<temp->children.size();i++)
                    if(temp->children[i])
                        qu.push(temp->children[i]);
            }
            res.push_back(vec);
        }
        return res;

    }
};