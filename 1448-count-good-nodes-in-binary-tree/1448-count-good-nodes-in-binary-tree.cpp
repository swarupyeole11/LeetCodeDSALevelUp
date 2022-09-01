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
    
    void tree(TreeNode *node , int max , int *cnt)
    {
        if(node==NULL)
            return;
        
        if(node->val>=max)
        {
            max=node->val;
            *cnt=*cnt+1;
        }
        
        tree(node->left,max,cnt);
        tree(node->right,max,cnt);
        
    }
    
    int goodNodes(TreeNode* root) {
        int max = INT_MIN;
        int count =0;
        tree(root,max,&count);
     
        return count;
    }
};