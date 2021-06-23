#include<bits/stdc++.h>
using namespace std;
class node{
public:
  int data;
  node*next;
  node (int d){
    data=d;
    next=NULL;
  }
};

void L_list_push(node*&head,int data) {
  node*n=new node(data);
  n->next=head;
  std::cout << data <<" pushed into stack."<<'\n';
  head=n;
}

int list_pop(node*&head) {
  if (head==NULL) {
    std::cout << "Stack Underflow:" << '\n';
  }
  int res=head->data;
  node*temp=head;
  head=head->next;
  delete temp;
  return res;
}

bool isListEmpty(node*head){
  if (head==NULL) {
    return true;
  }
  else return false;
}

int getTop(node*head){

  return head->data;
}

void insertlist(node*&head) {
  int data;
  std::cin >> data;
  while (data!=-1) {
    L_list_push(head,data);
    std::cin >> data;
  }
}

int main(int argc, char const *argv[]) {
  node*head=NULL;

   insertlist(head);

   if (isListEmpty(head)==0) {
     std::cout << "List is Not Empty:" << '\n';
   } else {
     std::cout << "List is Empty:" << '\n';
   }
   std::cout << "Top element is stack is:"<< getTop(head) << '\n';
   std::cout << "Popped top." << '\n';
   list_pop(head);
   std::cout <<"Now top of the stack is:" ;
   std::cout <<list_pop(head);


  return 0;
}
