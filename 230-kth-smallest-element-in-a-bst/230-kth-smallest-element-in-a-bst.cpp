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
    int inorder(TreeNode* root, int &k)
    {
        if(root==NULL) return -1;
        int a=inorder(root->left,k);
        k--;
        if(k==0) return root->val;
        int b=inorder(root->right,k);
        return max(a,b);
    }
    int kthSmallest(TreeNode* root, int k) {
        int num=k;
        int ans=inorder(root,num);
        return ans;
    }
};