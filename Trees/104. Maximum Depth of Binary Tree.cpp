class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
       //Breadth first search itterative
        
        if(!root)
            return 0;
        //create queue of nodes
        queue<TreeNode*> q;
        //create curr pointer
        TreeNode* curr;
        
        int ans = 0;
        int size = 0;
        //start the queue with the root.
        q.push(root);
        
        //while the queue is not empty
        while(q.empty()!=true)
        {
            ans++;
            size = q.size();
            //while there are stuff in q
            while(size>0)
            {
                //set the curr to the next node
                curr = q.front();
                //if there are nodes in the left or right add them to queue to visit
                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
                
                //we are done adding child nodes pop the last 
                q.pop();
                //reduce the sizecntr
                size--;
            }
        }
        //return the count.
        return ans;
    }
};
