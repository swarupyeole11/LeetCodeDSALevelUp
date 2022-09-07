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
    string tree2str(TreeNode* root) {
        
        string str = "";
        if(root==nullptr)
            return "";
        
        str+=to_string(root->val);

        
        if(root->left)//if left pointer is not null
            str=str+"("+tree2str(root->left)+")";
            
        if(root->right!=nullptr) {//if right pointer is null
            if(!root->left) //if left pointer was null adding empty par
                str+="()";
       
                str=str+"("+tree2str(root->right)+")";

            }
        
        return str;
    }
};