#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // if(head==NULL || head->next == NULL)
        // {
        //     return true  ; 
        // }
        // else if (head->next->next ==NULL)
        // {
        //     if(head->val == head->next->val)
        //     {
        //         return true  ; 
        //     }
        //     else 
        //     {
        //         return false ; 
        //     }
        // }
        ListNode* s = head ;
        ListNode* f = head ; 
        ListNode* p ; 
        ListNode* r ; 
        ListNode* pl  = NULL; 
        int c  = 1  ; 
        while( f!=nullptr && f->next!=nullptr)
        {
            f =  f->next->next ;
            p = s  ;  
            s = s->next ; 
            c++ ; 
        } 
        if(f!=NULL)
        {
            pl = s->next  ;
            s->next = NULL ;
            r = s ;  
        }
        else
        {
          
           c-- ;  r = p  ;
        }
        if(r!=p)
        {
           
            cout<<"sbeign"<<endl ; 
        }
        cout<<"here it is: "<<r->val<<p->val<<s->val<<"heres c "<<c<<endl ; 
        ListNode* t = r->next ; 
        ListNode* t2 ; 
        if(pl!=NULL){t =  pl ;}
        t2 = t->next ;
        while(t!=NULL)
        {
            t->next = r;
            r = t  ; 
            t = t2 ; 
            if(t2!=NULL){ t2 = t2->next ; }
            else{t2=NULL;}
        }
        cout<<"ok"<<r->val<<endl ; 
        ListNode* ss  = head ;
        bool pi = false ;
        while(ss->next!=r->next && pi==false && ss->next!=s )
        {
            if(ss->val!=r->val)
            {
                return false ; 
            } 
            if(ss->next==r)
            {
                pi= true ;
            }

            s = ss->next ;
            r = r->next ; 
            if(ss==NULL||r==NULL){break;}
            cout<<"hererns: "<<r->val<<ss->val<<endl ; 
        } 
        cout<<"polpo"<<endl ; 
        return true  ; 


    }
};
int main()
{
   ListNode* head = new ListNode;
    head->val = 1;
    head->next = new ListNode;
    head->next->val = 2;
    head->next->next = new ListNode;
    head->next->next->val = 2;
    head->next->next->next = new ListNode;
    head->next->next->next->val = 5;
    head->next->next->next->next = new ListNode;
    head->next->next->next->next->val = 2;
    head->next->next->next->next->next = new ListNode;
    head->next->next->next->next->next->val = 2;
    head->next->next->next->next->next->next = new ListNode;
    head->next->next->next->next->next->next->val = 1;
    head->next->next->next->next->next->next->next = nullptr;

    ListNode* curr = head;
    Solution s;
    cout << s.isPalindrome(curr) << endl;
   
    return 0;


}