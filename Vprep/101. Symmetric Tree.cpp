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
    
    //Time Complexity O(N)
    //Space Complexity O(N)
    
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricHelp(root->left,root->right);
    }
    
    bool isSymmetricHelp(TreeNode* left, TreeNode* right)
    {
        //RECURSION
        if(left == NULL || right == NULL)
            return left==right;
        
        if(left->val != right->val) //if not matching return false
            return false;
        
        return isSymmetricHelp(left->left, right->right)//if matching return true
        &&
                isSymmetricHelp(left->right, right->left);//if matchring return true
    }
};
