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

class Solution 
{

    public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0 , num=0, x1=0, x2=0;
        ListNode* result, **m=&result;
                 
        while ((l1 !=nullptr) || (l2 !=nullptr))
        {
            if (l1 !=nullptr){ x1 = l1->val; l1 = l1->next; } 
            if (l2 !=nullptr){ x2 = l2->val; l2 = l2->next; }
                     
            num = x1 + x2 + carry;
            
            ListNode *node = new ListNode((num)%10);
            *m = node;
            m = (&node->next);
            carry = num/10;            
            x1 =0;
            x2 =0;
        }
        
        if (carry > 0) 
        {
            ListNode *node = new ListNode(carry%10);
            *m = node;
        }
        
        return result; 
    }
};