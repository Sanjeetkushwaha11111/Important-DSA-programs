#include<bits/stdc++.h>
using namespace std;

class node{

public:
  int data;
  node*next;

  node(int d){
    data=d;
    next=NULL;
  }

};

void insertAtTail(node*&head,int data) {
  if (head==NULL) {
    head=new node(data);
    return;
  }else{
    node*tail=head;
    while (tail->next!=NULL)
    {
    tail=tail->next;
    }
    tail->next=new node(data);
  }
  return;
  }

void buildL_List(node*&head) {
   int data;
   std::cin >> data;
   while (data!=-1) {
     insertAtTail(head,data);
     std::cin >> data;
   }
}
    //iteratevly reverse list
void reverselist(node*&head) {
  node*C=head;         //points Current node
  node*P=NULL;         //points Previous node
  node*N;              //points to next node
  while (C!=NULL) {
    //save next node
    N=C->next;
    //Make the Current node point to Previous
    C->next=P;
    //Update Previous and Current;
    P=C;
    C=N;
  }
  head=P;
}

//recursively reverse list
 node*recursively_reverse_list(node*head){
   //Base case
   if ( head->next==NULL || head==NULL) {
     return head;
   }else{
     node*small_head=recursively_reverse_list(head->next);
     node*C=head;
     C->next->next=C;
     C->next=NULL;
     return small_head;
   }
 }




void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data << "->";
    head=head->next;
  }
  std::cout << "\n";
}

int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "Enter Element of list, to finish list press '-1'." << '\n';
  buildL_List(head);
  printlist(head);
  std::cout << "After reversing List:" << '\n';
  //reverselist(head);
  head=recursively_reverse_list(head);
  printlist(head);


  return 0;
}
