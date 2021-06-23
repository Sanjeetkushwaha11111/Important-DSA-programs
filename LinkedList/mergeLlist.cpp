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

void insert_list1(node*&head,int data) {
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
}


void input_list(node*&head){
  int data;
  std::cin >> data;
  while (data!=-1) {
    insert_list1(head,data);
    std::cin >> data;
  }
  return;
}

node*mergeList(node*&a,node*&b){
  if (a==NULL) {
    return b;
  } else if (b==NULL) {
    return a;
  }
  node*c;
  if(a->data < b->data){
    c=a;
    c->next=mergeList(a->next,b);
  }
  else{
    c=b;
    c->next=mergeList(a,b->next);
      }
  return c;
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
  node*head2=NULL;
  std::cout << "Insert List1:" << '\n';
  input_list(head);
  std::cout << "Insert List2:" << '\n';
  input_list(head2);
  std::cout << "Builded list1 is:" << '\n';
  printlist(head);
  std::cout << "Builded list2 is:" << '\n';
  printlist(head2);
  std::cout << "Merged list is:" << '\n';
  mergeList(head,head2);
  printlist(head);

  return 0;
}
