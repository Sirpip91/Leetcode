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
        //O(N) Time complexity
        //O(n) Space Compleixty.
        //recursive
        //if either is null return
        if(p == NULL || q == NULL)
            return (p==q);
        
        //return if the two values are same go
        return(p->val == q->val)
            && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right);
        
        
    }
};
