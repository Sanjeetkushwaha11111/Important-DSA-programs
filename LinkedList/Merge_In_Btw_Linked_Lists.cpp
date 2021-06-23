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
  }else{
    node*lastnode=head;
    while (lastnode->next!=NULL) {
      lastnode=lastnode->next;
    }
    lastnode->next=new node(data);
  }
}

void insert_list(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
    buildL_List(head,data);
    std::cin >> data;
  }
}


node*mergenodes(node*head1,node*head2,int first, int last){
  node*a;
  node*b;
  int count=1;
  node*temp=head1;
  while (temp->next!=NULL) {
    if (count==first) {
          a=temp;
    }
    if (count==last) {
      b=temp->next->next;
    }
    count++;
    temp=temp->next;
  }

  a->next=head2;
  temp=head2;
  while (temp->next!=NULL) {
    temp=temp->next;
  }
  temp->next=b;
  return head1;
}

void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data << "->";
    head=head->next;
  }
  std::cout <<'\n';
}

int main(int argc, char const *argv[]) {
  node *head1=NULL;
  node*head2=NULL;
  std::cout << "Insert list 1:" << '\n';
  insert_list(head1);
  std::cout << "insert list 2:" << '\n';
  insert_list(head2);
  std::cout << "Builded list 1:" << '\n';
  printlist(head1);
  std::cout << "Builded list 2:" << '\n';
  printlist(head2);
  int a,b;
  std::cout << "Enter nodes a & b:" << '\n';
  std::cin >> a;
  std::cin >> b;
  mergenodes(head1,head2,a,b);
  std::cout << "After merging list2 in list1 at"<<a<<"&"<<b<<"position:" << '\n';
  printlist(head1);
  return 0;
}
