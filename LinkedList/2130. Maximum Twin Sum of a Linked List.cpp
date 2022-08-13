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
    int pairSum(ListNode* head) {
        
        //O(N) Time Complexity
        //O(1) Space Complexity
        
        //reverse the first half of linked list then compare with the second half.
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        int half = 0;
        
        while(curr != NULL)
        {
            half++;
            curr = curr->next;
        }
        
        curr = head;
        half = half/2;
        int count = 0;
        //reverse first half
        while(count < half)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            //keep track until at half.
            count++;
        }
        //second half pointer will start at the head of reversed list.
        ListNode* scurr = prev;
        
        int sum = 0;
        while(scurr && curr)
        {
            //take the max of twins and store in sum.
           sum = max(sum,scurr->val + curr->val);
            //iterate 
            scurr = scurr->next;
            curr = curr->next;
        }
        //return sum.
        return sum;
        
       
        
    }
};
