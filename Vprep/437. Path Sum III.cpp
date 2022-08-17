public:
int c=0;
void solve(TreeNode *root,int target,vector<int> v)
{
    if(!root)
        return;
    v.push_back(root->val);
    long long sum=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        sum+=v[i];
        if(sum==target)
            c++;
    }
    solve(root->left,target,v);
    solve(root->right,target,v);
    v.pop_back();
}
int pathSum(TreeNode* root, int targetSum) {
  
    vector<int> v;
    solve(root,targetSum,v);
    return c;
    
}
