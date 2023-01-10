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


    bool isSameTree(TreeNode* p, TreeNode* q) {

         if(!p && !q)      //!p means p==NULL  
            return true;    // this condition checks if both are null
         else if(!p || !q)
            return false;   // effectively works for only one of them is null as both null codition ocvered above
         else 
            return (p->val==q->val&&isSameTree(p->right,q->right)&&isSameTree(p->left,q->left));
    }
};