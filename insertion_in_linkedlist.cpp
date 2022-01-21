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

void insertAtEnd(node* &head, int val){
    node* n = new node(val);
    
    if(head == NULL){
        head = n;
        return;
    }
    
    node* p = head;
    while(p->link != NULL){
        p=p->link;
    }
    p->link=n;
}


//For output
void display(node* head){
    node* p = head;
    while(p!=NULL){
        cout << p->data <<"->";
        p = p->link;
    }
    cout << "NULL" <<endl;
}
