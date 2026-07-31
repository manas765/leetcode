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
    // Function to reverse a linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // Empty list or single node is always a palindrome
        if (head == nullptr || head->next == nullptr)
            return true;

        // Step 1: Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Skip the middle node if the length is odd
        if (fast != nullptr) {
            slow = slow->next;
        }

        // Step 3: Reverse the second half
        slow = reverseList(slow);

        // Step 4: Compare both halves
        fast = head;

        while (slow != nullptr) {
            if (fast->val != slow->val) {
                return false;
            }

            fast = fast->next;
            slow = slow->next;
        }

        return true;
    }
};