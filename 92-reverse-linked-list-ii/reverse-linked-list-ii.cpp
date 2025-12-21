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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* beforeLeft = &dummy;

       
        for (int i = 1; i < left; i++) {
            beforeLeft = beforeLeft->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = beforeLeft->next;
        ListNode* next = nullptr;

      
        for (int i = 0; i <= right - left; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        beforeLeft->next->next = curr;
        beforeLeft->next = prev; 

        return dummy.next;
    }
};
