#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node*left;
  node*right;

  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};

// this function take root and data as input,
// and compare with root node;
// if it is less than root, assigned to left node;
// either, assigned to right node of root.

node*buildBST(node*root,int data){

  //Base class
  if (root==NULL) {
    return new node(data);
  }
  //recursive case if data is less than root
  if (data<root->data) {
    root->left=buildBST(root->left,data);
  }
  //recursive case if data is greater than root
  else{
    root->right=buildBST(root->right,data);
  }
  return root;
}

// this functiontake input until -1 and assigned to functiion
// buildBST, which take parameter as rroot and dta.
//
node*insertelement(){
  int d;
  std::cin >> d;
  node*root=NULL;
  while (d!=-1) {
    root=buildBST(root,d);
    std::cin >> d;
  }
  return root;
}

bool searchinBST(node*root,int data){
  if (root==NULL) {
    return false;
  }
  if (root->data==data) {
    return true;
  }
  if (data<=root->data) {
    return searchinBST(root->left, data);
  } else {
    return searchinBST(root->right, data);
  }
}


// this function use breadth First search for printing element of tree,
// with help of queue.

void BFS(node*root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
         node*f=q.front();
         if (f==NULL) {
           std::cout <<'\n';
           q.pop();
           if (!q.empty()) {
             q.push(NULL);
           }
         }
         else{
         std::cout << f->data <<" ";
         q.pop();

         if (f->left) {
           q.push(f->left);
         }
         if (f->right) {
           q.push(f->right);
         }
  }
}
  return;
}

// void printTree(node*root){
//   if (root==NULL) {
//     return;
//   }
//     std::cout << root->data << "  ";
//     printTree(root->left);
//     printTree(root->right);
//     return;
//   }


int main(int argc, char const *argv[]) {
  node*root=insertelement();
  //printTree(root);
  BFS(root);

  int key;
  std::cout << "Enter element to search: ";
  std::cin >> key;
  std::cout << '\n';
  if (searchinBST(root,10)) {
    std::cout << "Present" << '\n';
  } else {
    std::cout << "Not Present" << '\n';
  }
  return 0;
}
