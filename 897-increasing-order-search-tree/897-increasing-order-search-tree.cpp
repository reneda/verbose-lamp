/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &v)
    {
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        root=NULL;
        TreeNode *temp=NULL;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
            TreeNode *curr= new TreeNode(v[i]);
            if(root==NULL){ root=curr; temp=curr;}
            else
            {
                //cout<<'h'<<" ";
                temp->right=curr;
                temp=curr;
            }
            //delete(curr);
        }
        return root;
    }
};