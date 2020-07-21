struct DLL
{
    string link;
    struct DLL *next;
    struct DLL *prev;
};
class BrowserHistory {
public:
    DLL *last_visit;
    BrowserHistory(string homepage) {
        DLL *node= new DLL;
        node->link=homepage;
        node->next=NULL,node->prev=NULL;
        last_visit=node;
    }
    
    void visit(string url) {
        DLL *node= new DLL;
        node->link=url;
        node->next=NULL,node->prev=last_visit;
        last_visit->next=node;
        last_visit=node;
    }
    
    string back(int steps) {
        DLL *ans=last_visit;
        while(steps--)
        {
            if(ans->prev)
                ans=ans->prev,last_visit=ans;
            else 
                return ans->link;
        }
        return ans->link;
    }
    
    string forward(int steps) {
         DLL *ans=last_visit;
        while(steps--)
        {
            if(ans->next)
                ans=ans->next,last_visit=ans;
            else 
                return ans->link;
        }
        return ans->link;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
