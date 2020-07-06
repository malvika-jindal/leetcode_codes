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
    ListNode* swapPairs(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* second=head->next;
        ListNode* third=second->next;
        ListNode* temp=head;
        second->next=temp;
        temp->next=third;
        ListNode* first=temp;
        head=second;
        first=first->next;
        while(first && first->next)
        {
            second=first->next;
            third=second->next;
            second->next=first;
            first->next=third;
            temp->next=second;
            temp=first;
            first=temp->next;
        }
        return head;
    }
};
