class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root, targetSum, path, ans);
        return ans;
    }
    
     void dfs(TreeNode* root, int sum,vector<int>& path,vector<vector<int>> &ans){
         if(!root) return ;
         path.push_back(root->val);
         if(!root->left and !root->right and root->val == sum) 
         ans.push_back(path);
         dfs(root->left, sum - root->val, path, ans);        //Traverse on left 
         dfs(root->right, sum - root->val, path, ans);      //Traverse on Right
         path.pop_back();                                   //Magic Happens here (Backtracking)
     }
};
