/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<Node*>s;
        Node *temp=head;
        Node *x;
        while(temp)
        {
            if(temp->child)
            {
                s.push(temp->next);
                temp->next=temp->child;
                temp->next->prev=temp;
                temp->child=NULL;
            }
            x=temp;
            temp=temp->next;
            if(!temp)
            {
                while(!s.empty())
                {
                    while(x!=NULL && x->next!=NULL)
                        x=x->next;
                    x->next=s.top();
                    if(x->next)
                        x->next->prev=x;
                    s.pop();
                }
            }
        }
        
        return head;
    }
};
