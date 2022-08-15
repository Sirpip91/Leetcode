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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        
        ListNode* node = new ListNode();
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* head = node;
        
        //creates a new node
        //node->next = new ListNode();
        
        while(p1 && p2)
        {
            if(p1->val < p2->val)
            {
                node->val = p1->val;
                p1 = p1->next;
            }
            else
            {
                node->val = p2->val;
                p2 = p2->next;
            }
            
            node->next = new ListNode();
            node = node->next;
        }
        
        //if we reach the end and there are leftovers add them.
        //ADD THE REST OF P2
        if(p1 != NULL)
        {
            while(p1 != NULL)
            {
                node->val = p1->val;
                p1 = p1->next;
                if(p1 == NULL)
                {
                    node->next = NULL;
                }
                else
                {
                    node->next = new ListNode();
                    node = node->next;
                }
            }
        }
         if(p2 != NULL)
        {
            while(p2 != NULL)
            {
                node->val = p2->val;
                p2 = p2->next;
                if(p2 == NULL)
                {
                    node->next = NULL;
                }
                else
                {
                    node->next = new ListNode();
                    node = node->next;
                }
            }
        }
        node = node->next;
        return head;
        
        
    }
};
