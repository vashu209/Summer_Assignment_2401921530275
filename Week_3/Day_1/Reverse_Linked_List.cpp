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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = head;
        ListNode *curr = head;
        ListNode *temp = head;
        while (curr && curr->next)
        {
            curr = curr->next;
        }
        while (temp != curr)
        {
            temp = prev->next;
            prev->next = curr->next;
            curr->next = prev;
            prev = temp;
        }
        return curr;
    }
};