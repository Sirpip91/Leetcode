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
class Solution {
public:
    int getDecimalValue(ListNode* head){
       vector<int> v;
        
        ListNode* curr = head;
        
        while(curr)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int ans=0;
        reverse(v.begin(),v.end());
        //go from last
        for(int i =0; i<v.size();i++)
        {
            
            /*
            
                1 * 2^0 = 1
                0 * 2^1 = 0
                1 * 2^2 = 4
                Total =   5
            
            */
            //Converting binary to integer.
            //      1or0 * 2^index
            ans += v[i] * pow(2,i);
        }
        return ans;
    }
};
