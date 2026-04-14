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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int v1, v2, digit;
        int carry = 0;
        ListNode dummy;
        ListNode *cur = &dummy;

        while (l1 || l2 || carry) {
            v1 = (l1) ? l1->val : 0;
            v2 = (l2) ? l2->val : 0;

            int sum = v1 + v2 + carry;
            carry = sum / 10;
            digit = sum % 10;

            cur->next = new ListNode(digit);
            cur = cur->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};
