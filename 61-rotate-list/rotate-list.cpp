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
        //o(n)
        if(!head||!head->next||k==0)
        return head;
        int length=1;
        ListNode*curr=head;
        while(curr->next) 
        {
            curr=curr->next;
            length++;
        } 
        curr->next=head;
        k%=length;
        int step=length-k;
        while(step--)
        {curr=curr->next;
        }
        
            head=curr->next;
            curr->next=NULL;
        
        return head;
    }
};