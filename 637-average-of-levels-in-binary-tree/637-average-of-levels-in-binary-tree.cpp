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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            double levelans=0;
            int size = Q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *node = Q.front();
                Q.pop();
                if(node->left!=NULL)Q.push(node->left);
                if(node->right!=NULL)Q.push(node->right);
                levelans=levelans+node->val;
            }
            cout<<levelans<<" ";
            ans.push_back(levelans/size);
      }
        
        return ans;
    }
};