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
     while (tail->next!=NULL) {
       tail=tail->next;
     }
     tail->next=new node(data);
     return;
   }
}

void buildlist(node*&head) {

  int data;
  std::cin >> data;

     while (data!=-1) {
       insertAtTail(head,data);
       std::cin >> data;
     }
}
void printlist(node*head) {
   while (head!=NULL) {
     std::cout << head->data << "->";
     head=head->next;

   }
}

int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "Enter -1 after entering all the element:" << '\n';
  buildlist(head);
  printlist(head);
  return 0;
}
