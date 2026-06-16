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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode dummy(0, head);
        ListNode *f = &dummy;
        ListNode *s = &dummy;
        if (!head || !head->next)
            return nullptr;
        while (n != 0 && f->next)
        {
            f = f->next;
            n--;
        }
        while (f && f->next)
        {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;
        return dummy.next;
    }
};