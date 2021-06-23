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

void insertAtHead(node*&head,int data) {
  node*n=new node(data);
  if (head==NULL) {
    n->next=n;
    head=n;
    return;
  }
  node*temp=head;
  while (temp->next!=head) {
      temp=temp->next;
  }
  temp->next=n;
  n->next=head;
  head=n;
}

void circularLL(node*&head,int data) {
  if (head==NULL) {
    insertAtHead(head,data);
    return;
  }else{
  node*temp=head;
  node*n=new node(data);
    while (temp->next!=head) {
      temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
}

void insert_list(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
     circularLL(head,data);
     std::cin >> data;
  }
}


void printlist(node*head) {
  std::cout << "null <==> ";
  node*temp=head;
  do {
    std::cout <<temp->data <<" <==> ";
    temp=temp->next;
  }
  while(temp!=head);
  std::cout <<head->data;
}


int main(int argc, char const *argv[]) {
  node*head=NULL;
  insert_list(head);
  printlist(head);
  return 0;
}
