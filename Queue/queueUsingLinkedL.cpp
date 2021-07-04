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

 void enqueue(node*&head, int data) {    //enqueuing the Queue at tail node by maintaing a tail node with help of head
  if (head==NULL) {
    head=new node(data);
    return;
  }else{
    node*tail=head;
    while (tail->next!=NULL) {
      tail=tail->next;                  //insering elements at tail node
    }
    tail->next=new node(data);
  }
  return;
 }
 void insertData(node*&head) {
    int data;
    std::cin >> data;
    while (data!=-1) {
      enqueue(head,data);
      std::cin >> data;
    }
    return;
 }

void dequeue(node*&head) {
node*temp=head;
head=head->next;
std::cout << "dequeuing:  "<<temp->data << '\n';
delete temp;
}

 void getTop(node*head) {
   std::cout << head->data << '\n';
   return;
 }


// void printList(node*head) {
//   while (head!=NULL) {
//     std::cout << head->data << "| -> |";
//     head=head->next;
//   }
//   std::cout << " " << '\n';
// }


int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "enqueue elements:" << '\n';
  insertData(head);
  dequeue(head);
  std::cout << "top element: " ;
  getTop(head);
  return 0;
}
