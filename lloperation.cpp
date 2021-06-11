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
    int jump = 1;
    node *temp = head;
    while (jump <= pos - 1)
    {
      temp = temp->next;
      jump = jump + 1;
    }
    node *n = new node(data);
    n->next = temp->next;
    temp->next = n;
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

void deleteAtMiddle(node *&head, int pos)
{
  node*temp=head;
  node*prev;

  if (head==NULL) {
    return;
    }else if (pos==0) {
    head=temp->next;
    delete temp;
    return;
  } else {
    int jump=1;
       while (jump<pos-1) {
         temp=temp->next;
         jump=jump+1;
       }
       head->next=temp->next;
      delete prev;
      return;
  }
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
  insertAtHead(head, 55);
  insertAtHead(head, 33);
  insertAtHead(head, 22);
  insertAtMiddle(head, 44, 2);
  insertAtMiddle(head, 11, 0);
  insertAtMiddle(head, 66, 7);
  insertAtTail(head, 77);
   print(head);
   std::cout << "After Deletion" << '\n';
  // deleteAtHead(head);
  deleteAtMiddle(head,5);
  // deleteAtTail(head);

  print(head);
  return 0;
}
