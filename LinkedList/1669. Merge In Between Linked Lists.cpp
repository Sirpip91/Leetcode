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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        
        //remove a and b
        //insert list2 instead.
        
        //need to save a-1 ->next and b->next; then make 
        
        //O(n) time complexity
        //O(1) Space Complexity.
        
        ListNode* curr = l1;
        ListNode* prev = NULL;
        
        ListNode* anode;
        ListNode* bnode;
        
        while(a>0 && curr)
        {
            prev = curr;
            curr = curr->next;
            a--;
        }
        anode = prev;
        
        
        curr = l1;
        prev = NULL;
        while(b>0 && curr)
        {
            prev = curr;
            curr = curr->next;
            b--;
        }
        
        bnode = curr;
        anode->next = l2;
        
        //get to the end of l2;
        curr = l2;
        prev = NULL;
        
        while(curr->next)
        {
            curr= curr->next;
            prev=curr;
        }
        
        prev->next = bnode->next;
        
        return l1;
        
        
    }
};
