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
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode *temp=head;
        while(temp && temp->val==val)
        {
            temp=temp->next;
        }
        head=temp;
        ListNode *x=temp;
        while(temp)
        {
            if(temp->val==val)
            {
                if(temp->next)
                {
                    temp->val=temp->next->val;
                    temp->next=temp->next->next;
                }
                else
                {
                    x->next=NULL;
                    return head;
                }
            }
            else
            {
                x=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};
