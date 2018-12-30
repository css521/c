
/*
Given preorder and inorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.

For example, given
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]

Return the following binary tree:
    3
   / \
  9  20
    /  \
   15   7
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
     TreeNode* BuildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int len = preorder.size();
        return build(preorder,0,len-1,inorder,0,len-1);
    }
    TreeNode* build(vector<int>& pre,int ps,int pe,vector<int>& in,int is,int ie){
        TreeNode *p=NULL;
        if(ps<=pe){
            p = new TreeNode(pre[ps]);
            int index=is;
            for(;index<=ie;index++){
                if(in[index]==p->val) break;
            }
            int llen=index-is;
            int rlen=ie-index;
            p->left = build(pre,ps+1,ps+llen,in,is,index-1);
            p->right = build(pre,pe-rlen+1,pe,in,index+1,ie);
        }
        return p;
    }