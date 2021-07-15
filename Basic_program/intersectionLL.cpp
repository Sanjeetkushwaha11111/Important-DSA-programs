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
  std::cin >>data;
  while (data!=-1) {
    buildL_List(head,data);
    std::cin >> data;
  }
}
/* Takes head pointer of the linked list and
returns the count of nodes in the list */
int getcount(node*head){
  int count=0;
  node*Current=head;
  while (Current->next!=NULL) {
    count++;
    Current=Current->next;
  }
  return count;
}
/* function to get the intersection point of two linked
lists head1 and head2 where head1 has d more nodes than
head2 */
int intersectedpoint(int d,node*head1,node*head2){
  node*a=head1;
  node*b=head2;


  for (int i = 0; i <d; i++) {
    if (a==NULL) {
      return -1;
    }
    a=a->next;
  }
  // Move both pointers of both list till they
      // intersect with each other
  while (a!=NULL && b!=NULL) {
    if (a->data==b->data){
      return a->data;
    }
    else{
    // Move both the pointers forward
    a=a->next;
    b=b->next;
  }
  return 0;
}
}
/* function to get the intersection point of two linked
lists head1 and head2 */

int getintersection(node*head1,node*head2){
  int c1=getcount(head1);
  int c2=getcount(head2);
  int d;

  if (c1>c2) {
    d=c1-c2;
    return intersectedpoint(d,head1,head2);
  }else
  d=c2-c1;
  return intersectedpoint(d,head2,head1);
}


void printlist(node*head) {
  while (head!=NULL) {
    std::cout << head->data << "->";
    head=head->next;
  }
  std::cout <<'\n';
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
  std::cout << "Node of intersection is: " << getintersection(head1,head2);
  return 0;
}
