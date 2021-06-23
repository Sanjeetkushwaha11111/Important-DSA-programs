#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int d)
  {
    data = d;
    next = NULL;
  }
};
//<<<<<<------------------------------------------->>>>>>>>>>
void insertAtHead(node *&head, int data)
{
  node *n = new node(data);
  n->next = head;
  head = n;
}

//<<<<--------------------------------------------->>>>>>>>>

void insertAtTail(node *&head, int data)
{
  if (head == NULL)
  {
    head = new node(data);
    return;
  }
  else
  {
    node *tail = head;
    while (tail->next != NULL)
    {
      tail = tail->next;
    }
    tail->next = new node(data);
  }
  return;
}
//<<<<--------------------------------------------->>>>>>>>>

int length(node *head)
{
  int length = 0;
  while (head != NULL)
  {
    head = head->next;
    length = length + 1;
  }
  return length;
}

//<<<<--------------------------------------------->>>>>>>>>

void insertAtMiddle(node *&head, int data, int pos)
{
  if (head == NULL || pos == 0)
  {
    insertAtHead(head, data);
  }
  else if (pos >= length(head))
  {
    insertAtTail(head, data);
  }
  else
  {
    node*n=new node(data);
    int count=1;
    node*temp=head;
    while (count<=pos-1) {
      temp=temp->next;
      count++;
    }
    node*nex=temp->next;
    temp->next=n;
    n->next=nex;

  }
}
//<<<<--------------------------------------------->>>>>>>>>

void deleteAtHead(node *&head)
{
  node *temp = head;
  head = head->next;
  delete temp;
  return;
}
//<<<<--------------------------------------------->>>>>>>>>

void deleteAtTail(node *&head)
{
  node *prev = NULL;
  node *temp = head;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  delete temp;
  prev->next = NULL;
  return;
}
//<<<<--------------------------------------------->>>>>>>>>

void deleteAtMiddle(node*&head, int pos)
{
  node*temp=head;
  node*prev;
  int count=1;
  while (count<pos-1) {
    temp=temp->next;
    count++;
  }
  prev=temp->next;
  temp->next=temp->next->next;
  delete prev;
}

//<<<<--------------------------------------------->>>>>>>>>

void print(node *head)
{
  while (head != NULL)
  {
    std::cout << head->data << "->";
    head = head->next;
  }
  std::cout << " " << '\n';
}
//<<<<<--------------------------------------->>>>>>>>>>>

int main(int argc, char const *argv[])
{
  node *head = NULL;
  std::cout << "Before Deletion: " << '\n';
  insertAtHead(head, 4);
  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);
  // insertAtMiddle(head, 44, 2);
  // insertAtMiddle(head, 11, 0);
  // insertAtMiddle(head, 66, 7);
  //insertAtTail(head, 77);
  insertAtMiddle(head,5,5);
   print(head);
   std::cout << "After Deletion" << '\n';
  //deleteAtHead(head);
  deleteAtMiddle(head,2);
  //deleteAtTail(head);

  print(head);
  return 0;
}
