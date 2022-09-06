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
    
    // if a subtree have only zero then return true
    
    bool dfs(TreeNode* root)
    {
        // base case
        
        if(root == NULL)
            return true;
        
        // call for left subtree
        
        bool left = dfs(root -> left);
        
        // call for right subtree
        
        bool right = dfs(root -> right);
        
        // if left subtree have only zero, then delete left subtree
        
        if(left)
            root -> left = NULL;
        
        // if right subtree have only zero, then delete right subtree
        
        if(right)
            root -> right = NULL;
        
        // if root's val == 0 and left subtree and right subtree have only zero then return true
        
        return root -> val == 0 && left && right;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        if(root == NULL)
            return NULL;
        
        // call for dfs
        
        bool ans = dfs(root);
        
        // if complete subtree have only zero then return NULL
        
        if(ans == true)
            return NULL;
        
        return root;
    }
};