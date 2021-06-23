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
  }else{
    node*last=head;
    while (last->next!=NULL) {
      last=last->next;
    }
    last->next=new node(data);
  }
  return;
}

void inputL_List(node*&head){
  int data;
  std::cin >> data;
  while (data!=-1) {
    insert_list(head,data);
    std::cin >> data;
  }
  return;
}

node*merge(node*&head){
node*cur_node=head;
while (cur_node && cur_node->next) {
    node*nextnode=cur_node->next;
    if (cur_node->data==nextnode->data) {
            cur_node->next=nextnode->next;
    }else
       cur_node=nextnode;
}
return head;
}

void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data <<"->";
    head=head->next;
  }
  std::cout << "\n";
}

int main(int argc, char const *argv[]) {
  node*head1=NULL;
  node*head2=NULL;
  std::cout << "Insert List1:" << '\n';
  inputL_List(head1);
  std::cout << "Builded list1 is:" << '\n';
  printlist(head1);
  std::cout << "after removing duplicate element: " << '\n';
  merge(head1);
  printlist(head1);

  return 0;
}
