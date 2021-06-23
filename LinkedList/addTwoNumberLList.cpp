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

void buildL_List(node*&head,int data) {
    if (head==NULL) {
        head=new node(data);
        return;
    }
    node*lastnode=head;
    while (lastnode->next!=NULL) {
      lastnode=lastnode->next;
    }
    lastnode->next=new node(data);
    return;
}

void insert_list(node*&head) {
   int data;
  std::cin >> data;
  while (data!=-1) {
    buildL_List(head,data);
    std::cin >> data;
  }
}

void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data << "->";
    head=head->next;
  }
  std::cout <<'\n';
}

node*addtwoLlist(node*head1,node*head2){
  
}

int main(int argc, char const *argv[]) {
  node*head1=NULL;
  node*head2=NULL;
  std::cout << "Insert list 1:" << '\n';
  insert_list(head1);
  std::cout << "insert list 2:" << '\n';
  insert_list(head2);
  std::cout << "Builded list 1:" << '\n';
  printlist(head1);
  std::cout << "Builded list 2:" << '\n';
  printlist(head2);
  addtwoLlist(head1,head2);
  printlist(head1);
  return 0;
}
