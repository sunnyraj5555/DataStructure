#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node* link;
    
    // constructor
    node(int val){
        data = val;
        link = NULL;
    }
};


//create new node node
//change the link of n-> to head, right now head-> link = first node
// now change head = now
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->link = head;
    head=n;
}
