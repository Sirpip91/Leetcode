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

struct minc{
    
    //get the min
    bool operator() (ListNode* a, ListNode* b)
    {
        //return the min of the heap.
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        //PRIORTIY QUEUE SOLUTION TAKES THE MIN ELEMENT AND ADDS TO NEW LINKED LIST.
        
        
    priority_queue<ListNode*, vector<ListNode*>, minc> pq;    
    
        //add elements in priorty queue.
        
        for(ListNode* i : lists)
        {
            //if x not null
            if(i)
            {
                //push nodes in pq
            pq.push(i);
            }
        }
        
        ListNode* head = NULL;
        ListNode* tail = NULL;
        
        while(!pq.empty())
        {
            //save lowest node in x
            ListNode* x = pq.top();
            pq.pop();
            //check if insert at in or head
            if(head == NULL)
            {
                
                tail = x;
                head = tail;
            }
            else//if head has value
            {
                tail->next = x;
                tail = x;
            }
            
            //if not null push the next in the pq
            if(x->next)
                pq.push(x->next);
        }
        
        return head;
    }
};
