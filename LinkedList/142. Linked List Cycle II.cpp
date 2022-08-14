/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        //O(n) Time Complexity
        //O(1) Space Complexity
        
        ListNode* fast = head;
        ListNode* slow = head;
        bool cyclefound = false;
        //find the cycle
        while(fast && slow && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            //we have found cycle
            if(slow == fast)
            {
                cyclefound=true;
                break;
            }
        }
        if(cyclefound == false)
            return NULL;
    
        //when we find cycle  reset one pointer to head and restart loop
        fast = head;
        //only itteratting by one node at a time.
        while(slow!=fast)
        {
            //when they meet it will be at the start of the linked list.
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast;
        
    }
};
