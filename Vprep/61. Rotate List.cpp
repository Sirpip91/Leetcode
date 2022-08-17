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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* curr = head;
        int cnt = 0;
        if(head==NULL || k == 0)
            return head;
        
        //find last element; and count how many 
        while(curr->next !=NULL)
        {
            
            curr = curr->next;
            cnt++;
        }
        //curr is now at last element.
        curr->next = head;
        
        //we need to make last k = null;
        
        //shorter test case.
        k = k%(cnt+1);
        
        int jump = cnt-k;
        //reset counter
        curr = head;
        
        //get to cnt - k 
        while(jump)
        {
            curr = curr->next;
            jump--;
        }
        //save head before breaking
        ListNode* start = curr->next;
        //break and make null.
        curr ->next = NULL;
        
        //return the head.
        return start;
        
    }
};
