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

void insert_list(node*&head,int data){

 if (head==NULL) {
   head=new node(data);
   return;
 } else {
   node*tail=head;
   while (tail->next!=NULL) {
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
    insert_list(head,data);
    std::cin >> data;
  }
}

int kth_node(node*&head,int pos) {
  int k=1;
  node*temp=head;
  while (k<=pos) {
    temp=temp->next;
    k=k+1;
  }
  std::cout << "element at "<<pos<<"th is: "<< temp->data << '\n';
}


void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data <<"->";
    head=head->next;
  }
  std::cout << "\n";
}
int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "Insert Element:" << '\n';
  buildL_List(head);
  std::cout << "Builded list is:" << '\n';
  printlist(head);
  int position;
  std::cout << "Enter position:" << '\n';
  std::cin >> position;
  kth_node(head,position) << '\n';
  return 0;
}
