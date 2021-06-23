
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
    head=n;
    return;
  }else{
    node*temp=head;
    while (temp->next!=NULL) {
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
  std::cout << "null <==> ";
  while (head!=NULL) {
    std::cout <<head->data <<" <==> ";
    head=head->next;
  }
  std::cout <<"null"<<"\n";
}

node*reverseDLL(node*&head) {
  if (head==NULL || head->next==NULL) return head;

     node*curr=NULL;
     node*temp=head;
     while (temp!=NULL) {

       // Swapping next and previous for all nodes of DLL
       curr=temp->previous;
       temp->previous=temp->next;
       temp->next=curr;

       temp=temp->previous ;
     }

     // before changing the head, check for the cases like emptyDLL
     // and list with only one head;
     if (curr!=NULL) {
            head=curr->previous;
     }
     return curr;
}


int main(int argc, char const *argv[]) {
  node*head=NULL;
  std::cout << "Enter Element of list, to finish list enter '-1'-" << '\n';
  insert_list(head);
  printlist(head);
  std::cout << "After reversing linked list:" << '\n';
  reverseDLL(head);
  printlist(head);

  return 0;
}
