#include <bits/stdc++.h>
#include <cstdlib> // for rand() function
#include <ctime> // for srand() function

class Node; // forward declaration
Node *removeDuplicates(Node *head);
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *removeDuplicates(Node *head) {
  // Write your code here
  if (head == NULL || head->next == NULL) {
    return head;
  }
  
Node* p = head ; 
Node* t = p->next ; 
Node* it = p ;
 while(p->next!=NULL)
 {
     while(t!=NULL)
     {
         if(t->data==p->data)
         {
             it->next =  t->next ; 
             t->next =  NULL ; 
             delete t  ; 
             t = it->next ; 
             continue;
         }
        //  cout<<t->data<<endl;
         t = t->next ; 
         it = it->next ; 
     }
     if(p->next==NULL){break;}
    //  cout<<"leo"<<p->data<<endl ; 
     p = p->next; 
     t = p->next; 
     it = p; 
 } 
  return head ;
}

int main()
{
   
    int t = 7;
    // generate a linked list of severn numbers and pass its head to removeDuplicates()
    while (t--)
    {
        int n = 7;
        Node *head = NULL;
        Node *tail = NULL;
        srand(time(0)); // use current time as seed for random generator
        while (n--)
        {
            int num = rand() % 10;
            if (head == NULL)
            {
                head = new Node(num);
                tail = head;
            }
            else
            {
                tail->next = new Node(num);
                tail = tail->next;
            }
        }
        head = removeDuplicates(head);
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
}