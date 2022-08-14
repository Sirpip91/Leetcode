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
    ListNode* swapNodes(ListNode* head, int k) {
        
        //O(n) Time Complexity
        //O(1) space Complexity
        
        ListNode* curr = head;
        ListNode* v1;
        ListNode* v2;
        int temp= 0;
        int cnt = 0;
        int last = 0;
        
        //count size
        while(curr)
        {
            cnt++;
            curr = curr->next;
        }
        
        curr = head;
        
        last = cnt-k;
        int lcount = 0;
        int kcount=1;
        
        //get to first k
        while(kcount < k)
        {
            curr = curr->next;
            kcount++;
        }
        //save first k to swap to v1
        v1 = curr;
        //reset
        curr =head;
        while(lcount <last)
        {
            curr = curr->next;
            lcount++;
        }
        //save last k to swap to v2
        v2 = curr;
        
        //swap them
        temp = v1->val;
        v1->val = v2->val;
        v2->val = temp;
        
        //return head;
        return head;
        
        
    }
};
