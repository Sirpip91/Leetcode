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

    //MEDIUM PROBLEM SOLUTION: https://www.youtube.com/watch?v=di_jUp3tWUI&ab_channel=CodewithAlisha

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int carry = 0;
        while(l1 && l2)
        {
            int value  = l1 ->val + l2->val + carry;
            carry = value / 10 ; //  16/10 =  1
            l3->next = new ListNode(value%10); // insert 6
            l3 = l3->next;
            l1=l1->next;
            l2=l2->next;
        }
        
        //check fi l1>l2 or l2<l1
        
         while(l1)
        {
            int value  = l1 ->val + carry;
            carry = value / 10 ; //  16/10 =  1
            l3->next = new ListNode(value%10); // insert 6
            l3 = l3->next;
            l1=l1->next;
    
        }
        
         while(l2)
        {
            int value  =  l2->val + carry;
            carry = value / 10 ; //  16/10 =  1
            l3->next = new ListNode(value%10); // insert 6
            l3 = l3->next;
          
            l2=l2->next;
        }
        
        //if we have a carry over at the end 
        if(carry)
        {
            l3->next = new ListNode(carry);
        }
        
        
        
        //l3 will be pointing last rn 
        //but we have a head pointer saved
        
        return head->next;
        
        
    }
};
