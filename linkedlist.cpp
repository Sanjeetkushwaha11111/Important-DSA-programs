#include<bits/stdc++.h>
using namespace std;

// A linked list node
class node{
public:
    int data;
    node* next;

    node(int d){
      data=d;
      next=NULL;
    }
};
/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void insertAtHead(node*&head, int data){

      node*n=new node(data);   /* 1. allocate node */
      n->next=head;            /* 3. Make next of new node as head */
      head=n;                  /* 4. move the head to point to the new node */
}

// This function prints contents of
// linked list starting from head
void print(node*head){
  while (head!=NULL) {
    std::cout << head-> data <<"->";
    head=head->next;
  }
}
int main(int argc, char const *argv[]) {
         node*head=NULL;
         insertAtHead(head,5); // Insert 5. So linked list becomes 5->NULL
         insertAtHead(head,4);// Insert 4. So linked list becomes 4->5->NULL
         insertAtHead(head,3);// Insert 3. So linked list becomes 3->4->5->NULL
         print(head);

  return 0;
}
