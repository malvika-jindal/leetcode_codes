// Copy List with Random Pointer
//12ms 

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        {
            return NULL;
        }
        Node *new_head=NULL;
        Node *temp=head;
        while(temp!=NULL)
        {
            Node *nnode=new Node(temp->val);
            if(new_head==NULL)
                new_head=nnode;
            Node *inter=temp->next;
            temp->next=nnode;
            nnode->next=inter;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->random==NULL)
            {
                temp->next->random=NULL;
            }
            else
            {
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        temp=head->next;
        Node *org=head;
        Node *ans=head->next;
        while(org!=NULL)
        {
            ans=org->next;
            org->next=org->next->next;
            org=org->next;
            if(org==NULL)
            {
                ans->next=NULL;
            }
            else
            {
                ans->next=org->next;
            }
        }
        return new_head;
    }
};
