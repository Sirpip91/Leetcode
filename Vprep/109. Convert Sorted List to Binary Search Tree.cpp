/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
        //https://www.youtube.com/watch?v=yyNlZPOABA8&ab_channel=CodewithAlisha
        //Time Compleixty O(N) we traverse each time n times
        //Space Complexity O(N) new n is numbe of nodes
       
        vector<int> v;
        int count = 0;
        while(head)
        {
            v.push_back(head->val);
            head= head->next;
            count++;
        }
        int start = 0;
        int end = count-1;
        
        return bst(v,start,end);
        
    }
                                    //start end
    TreeNode* bst(vector<int>&v, int s, int e)
    {
        //base
        if(s>e)
            return NULL;
        
        //MIDDLE will be the root. + 1 for even cases
        int m = (s+e+1)/2;
        TreeNode* temp = new TreeNode(v[m]);
        temp->left = bst(v,s,m-1);
        temp->right = bst(v,m+1,e);
        return temp;
    }
};
