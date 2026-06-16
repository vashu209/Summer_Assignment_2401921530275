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
    bool isPalindrome(ListNode *head)
    {
        if (!head->next)
            return true;
        ListNode *temp = head;
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = nullptr;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        while (slow)
        {
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        ListNode *first = head;
        ListNode *second = prev;
        while (second)
        {
            if (prev->val != temp->val)
            {
                return false;
            }
            prev = prev->next;
            temp = temp->next;
        }
        return true;
    }
};