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

void buildL_List(node*&head,int data){
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

void insert_list(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
    buildL_List(head,data);
    std::cin >> data;
  }
  return;
}

bool hasCycle(node*head){
if(head==NULL&& head->next==NULL) {
   return false;
}
node*a=head;
node*b=head->next;
while (a!=b) {
    if (b==NULL || b->next==NULL) {
      return false;
    }
    a=a->next;
    b=b->next->next;
}
return true;
}

void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data << "->";
    head=head->next;
  }
  std::cout <<'\n';
  return;
}

int main(int argc, char const *argv[]) {
  node *head=NULL;
  std::cout << "Enter elements:" << '\n';
  insert_list(head);
  std::cout << "List is" << '\n';
  printlist(head);
  std::cout << hasCycle(head) << '\n';
  return 0;
}
