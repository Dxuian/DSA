#include <bits/stdc++.h> 
using namespace std;
class node {
public:
  int d;
  node *n;
};

class Queue {
public:
  node *h = NULL;
  node *t = NULL;
  Queue() {
    // Implement the Constructor
    h = NULL;
    t = nullptr;
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty() {
    // Implement the isEmpty() function
    if (h == NULL ) {
      return true;
    }
    return false;
  }

  void enqueue(int data) {
    // Implement the enqueue() function
    node* x = new node;
    x->d = data;
    x->n = NULL;
    if (t == NULL) {
      t = x;
    } else {
      t->n = x;
      t = x;
    }
    if (h == NULL) {
      h = x;
    }
    return;
  }

  int dequeue() {
    // Implement the dequeue() function
    if (h == NULL) {
      return -1;
    }
    node *temp = h->n;
    int n = h->d ; 
    
    delete h ; 
    h =  temp ;
    return n ; 
  }

  int front() {
    // Implement the front() function
    if (h != nullptr) {
      return h->d;
    } else {
      return -1;
    }
  }
};



int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.enqueue(50);
    return 0;
}