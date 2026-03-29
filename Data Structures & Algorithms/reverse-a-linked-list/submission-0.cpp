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
    ListNode* reverseList(ListNode* head) {
        // if (!head) {
        //     return nullptr;
        // }
        // ListNode* newHead = head;
        // if(head->next) {
        //     newhead(reverseList(head->next));
        //     head->next->next = head;
        // }
        // head->next = nullptr;
        // return newHead;
        return recurse(nullptr, head);
    }
    ListNode* recurse(ListNode* prev, ListNode* curr) {
        if(curr == nullptr)
            return prev;
        ListNode* newNext = curr->next;
        //reverse
        curr->next = prev;
        return recurse(curr, newNext);
        
    }
};
