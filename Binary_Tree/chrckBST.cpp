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

node*buildBST(node*root, int data){
  if (root==NULL) {
    return new node(data);
  }
   else if (data <root->data) {
    root->left=buildBST(root->left,data);
  }
   else {
    root->right=buildBST(root->right,data);
  }
  return root;
}

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

//incomplete


bool isBST(node*root){
  if (root==NULL) {
    return false;

  }
  if (root->left->data < root->right->data) {
    return true;
  } else {
    return false;
  }
}



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


int main(int argc, char const *argv[]) {
  node*root=insertelement();
  BFS(root);
  if (isBST(root)) {
    std::cout << "BST Exist." << '\n';
  }
  else
  std::cout << "BST Not Exist." << '\n';

  return 0;
}
