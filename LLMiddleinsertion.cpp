#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
  //constructor for the node
  node(int d)
  {
    data = d;
    next = NULL;
  }
};
//<<<<<--------------------------------------->>>>>>>>>>>>>

void insert(node *&head, int data)
{
  node *n = new node(data);
  n->next = head;
  head = n;
}
// <<<<<------------------------------------------>>>>>>>>>>>>>>

int length(node *head)
{
  int length = 0;
  while (head != NULL)
  {
    head = head->next;
    length += 1;
  }
  return length;
}

//<<<<<<----------------------------------->>>>>>>>>>>
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
    return;
  }
}

//<<<<<<<------------------------------------->>>>>

void insertAtMiddle(node *&head, int data, int p)
{
  if (head == NULL || p == 0)
  {
    insert(head, data);
  }
  else if (p > length(head))
  {
    insertAtTail(head, data);
  }
  else
  {
    /*insert in Middle*/
    //take p-1 jump to insert at position p

    int jump = 1;
    node *temp = head;
    while (jump <= p - 1)
    {
      temp = temp->next;
      jump = jump + 1;
    }
    node *n = new node(data);
    n->next = temp->next;
    temp->next = n;
  }
}
//<<<<<<------------------------------------>>>>>>.

bool recursivesearch(node *head, int key)
{
  if (head == NULL)
  {
    return false;
  }
  if (head->data == key)
  {
    return true;
  }
  else
  {
    return recursivesearch(head->next, key);
  }
}
//<<<<<<<------------------------------------->>>>>

bool iterativesrch(node*head,int key){
  if (head==NULL) {
    return false;
  }else if (head->data==key) {
    return true;
    head=head->next;
  }
}

//<<<<<<------------------------------------>>>>>>.

void print(node *head)
{
  while (head != NULL)
  {
    std::cout << head->data << " ->";
    head = head->next;
  }
}

int main(int argc, char const *argv[])
{
  node *head = NULL;
  insert(head, 5);
  insert(head, 3);
  insert(head, 2);
  insertAtMiddle(head, 4, 2);
  insertAtMiddle(head, 6, 7);
  insertAtTail(head, 7);
  print(head);

  if (recursivesearch(head,4)) {
    std::cout << "Element present" << '\n';
  }else{
    std::cout << "Not present:" << '\n';
  }
  if (iterativesrch(head,4)) {
    std::cout << "Element---- present" << '\n';
  }else{
    std::cout << "Not present:" << '\n';
  }
  return 0;
}
