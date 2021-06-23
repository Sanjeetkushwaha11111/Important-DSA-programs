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

void insert_list(node *&head, int data)
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

void buildL_List(node *&head)
{
  int data;
  std::cin >> data;
  while (data != -1)
  {
    insert_list(head, data);
    std::cin >> data;
  }
}

node *midofLList(node *head)
{
  node *slow = head;
  node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}

void printlist(node *head)
{
  while (head != NULL)
  {
    std::cout << head->data << "->";
    head = head->next;
  }
  std::cout << "\n"
            << '\n';
}

int main(int argc, char const *argv[])
{
  node *head = NULL;
  std::cout << "Insert Element:" << '\n';
  buildL_List(head);
  printlist(head);
  std::cout << "Mid of List is: " << '\n';
  node *m = midofLList(head);
  std::cout << m->data << '\n';
  return 0;
}
