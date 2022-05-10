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
    void reverse(vector<int> &v)
    {
        int hi=v.size()-1,lo=0;
        while(lo<=hi)
        {
            swap(v[lo],v[hi]);
            lo++;hi--;
        }
    }    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
       vector<vector<int>> ans;
        bool rowparity=false;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root); q.push(NULL);
        while(q.size()>1)
        {
            vector<int> row; row.clear();
            while(q.front()!=NULL)
            {
                TreeNode *curr=q.front();
                row.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                q.pop();
            }
            q.pop();
            q.push(NULL);
            if(rowparity) reverse(row);
            ans.push_back(row);
            rowparity=!rowparity;
        }
        return ans;        
    }
};