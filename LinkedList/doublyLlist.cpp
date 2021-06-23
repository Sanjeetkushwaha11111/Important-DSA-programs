#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node*next;
  node*previous;

    node(int d){
      data=d;
      next=NULL;
      previous=NULL;
    }

};

 void insertAtHead(node*&head,int data) {
   node*n=new node(data);
   n->next=head;     // 'n' is new node inserted At Head and point to head;
   if (head!=NULL) {
     head->previous=n;   //  previous of head points to 'n' ;
   }
   head=n;            // now 'n' is point as new head;
 }

void doublyL_list(node*&head,int data) {
   node*n=new node(data);
   if (head==NULL) {
     insertAtHead(head,data);  //if head is null we point it to new node at inseert data;
     return;
   } else {
        node*temp=head;                //We can't traverse LL with so we first store head value in
                                       //temp, and iterate temp over over Linked list;
        while (temp->next!=NULL) {
          temp=temp->next;
        }
        temp->next=n;       //point to  next of temp i.e., tail of the list
        n->previous=temp;   //point to previous node of newly inserted node i.e., temp
   }
}

void insert_element(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
    doublyL_list(head,data);
    std::cin >> data;
  }
  return;
}

void printlist(node*head) {
  std::cout << "null<=";
  while (head!=NULL) {

    std::cout << head->data <<"<==>";
    head=head->next;
  }
  std::cout <<"null"<<'\n';
}

int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "Enter Element of list, to finish list press '-1'." << '\n';
  insert_element(head);
  insertAtHead(head,5);
  printlist(head);
  return 0;
}
