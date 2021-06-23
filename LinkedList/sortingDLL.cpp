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

void sortingDLL(node*&head) {
  node*Current=head;
  //int temp;
     // if (head==NULL || head->next==NULL) {
     //   return;
     // }else if (Current->data < Current->next->data) {
     //   Current=Current->next;
     //   return ;
     // } else {

       while (Current !=NULL) {

         if (Current->data > Current->next->data) {
           // temp=Current->data;
           // Current->data=Current->next->data;
           // Current->next->data=temp;
           swap(Current->data,Current->next->data);
         }
         Current=Current->next;
       }
       return
}


int main(int argc, char const *argv[]) {
  node*head=NULL;
  insert_list(head);
  printlist(head);
  std::cout << "After Sorting:" << '\n';
  sortingDLL(head);
  printlist(head);
  return 0;
}
