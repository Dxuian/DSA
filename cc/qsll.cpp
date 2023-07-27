#include<bits/stdc++.h>
using namespace std;
class Node;
void re(Node *head, Node* a , Node* s);
Node* sortList(Node *head);
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* sortList(Node *head){
    // Write your code here.
    re(head,head,NULL) ;
    return head ;
}
void re(Node *head, Node* a , Node* s)
{
    if(a==s)
    {
        return  ; 
    }
   Node* pi  =  a  ; 
   Node* it  =  pi->next  ; 
   int c = 0 ; 
    while(it!=NULL)
    {
        if(it->data<pi->data)
        {
            c++ ; 
        }
        it = it->next ; 
    }
    it = pi ; 
    cout<<" heres c: "<<c<<endl ; 
    
    while(c--)
    {
        it = it->next ; 
    }
    swap(pi->data , it->data) ; 
    Node* bw =  head ; 
    Node* fw =  it->next ;  
    Node* bww =  head ; 
    while(bww!=NULL)
    {
        cout<<" heres the thing: "<<bww->data<<endl; 
        bww = bww->next ; 
    }
    cout<<"hello"<<bw<<it<<endl ;
    while(bw!=it && fw!=NULL)
    {
        cout<<"this is bi: "<< bw->data <<"this is fw: "<< fw->data ; 
        if(bw->data > it->data && fw->data <= it->data)
        {
            swap(bw->data , fw->data) ; 
            bw  = bw->next ; 
            fw  = fw->next ;
            continue; 
        }
        else if (bw->data > it->data && fw->data >= it->data)
        {
            fw =  fw->next  ;
        }
        else if (bw->data < it->data && fw->data <= it->data)
        {
            bw =  bw->next  ;
        }
    }
    re(head, a, it-1) ; 
    re(head, it+1, NULL) ; 
    return  ; 

    

}
int main()
{
    //generate a linked list containing 0 , 1 , 2 only having 7 elementts in random orfer
    Node* head = new Node(0) ;
    Node* it = head ;
    for(int i = 0 ; i < 7 ; i++)
    {
        it->next = new Node(rand()%3) ; 
        it = it->next ; 
    }
    it = head ;
    sortList(head) ;  
}