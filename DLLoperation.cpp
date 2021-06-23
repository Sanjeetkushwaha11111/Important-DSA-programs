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

void doublyL_list(node*&head,int data) {
   node*n=new node(data);
   if (head==NULL) {
     head=new node(data);
     return;
   }else{
     node*temp=head;
     while(temp->next!=NULL) {
       temp=temp->next;
     }
     temp->next=n;
     n->previous=temp;
   }
   return;
}

void insert_list(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
    doublyL_list(head,data);
    std::cin >> data;
  }
  return;
}

void printlist(node*head) {
std::cout << " null<=> ";
  while (head!=NULL) {
    std::cout << head->data <<" <==> ";
    head=head->next;
  }
  std::cout << "null" <<"\n";
}

void InsertionInMiddle(node*&head,int data,int position) {
  node*n=new node(data);
   int count=1;
   node*temp=head;
   node*s;
   while (count < position-1) {
     count++;
     temp=temp->next;
   }
  //std::cout << temp->next->data << '\n';
   s=temp->next;
   temp->next=n;
   n->previous=temp;
   n->next=s;
   s->previous=n;
}

void deleteAtMiddle(node*&head,int position) {
  node*temp=head;
  node*prev;
  node*nex;
  int count=1;
  while (count<position-1) {
    temp=temp->next;
    count++;
  }
  prev=temp->next;
  nex=temp->next->next;
  temp->next=nex;
  nex->previous=temp;
  delete prev;
}

int main(int argc, char const *argv[]) {
  node*head=NULL;
  int value;
  int position;
  insert_list(head);
  printlist(head);
  std::cout << "Enter position to enter:" << '\n';
  std::cin >> position;
  std::cout << "Value: ";
  std::cin >> value;
  InsertionInMiddle(head,value,position);
  printlist(head);
  std::cout << "Enter position to delete" << '\n';
  std::cin >> position;
  deleteAtMiddle(head,position);
  printlist(head);
  return 0;
}
