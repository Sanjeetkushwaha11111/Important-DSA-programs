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



node*deleteinBST(node*root,int data){
  if (root==NULL) {
      return NULL;
  }
  else if(data < root->data) {
    root->left =deleteinBST(root->left,data);
    return root;
  }
  else if (data=root->data) {
    // 3 cases arises here

    // CASE 1:-  when root has zero node i.e., its leaf node;
    if (root->left==NULL && root->right==NULL) {
      delete root;
      return NULL;        //return null to its parent;
    }

    // CASE 2:- When root has one node

    // store root->left in temp delete temp and return temp to parent or,
    if (root->left!=NULL && root->right==NULL) {
      node*temp=root->right;
      delete root;
      return temp;

      // store root->right in temp delete temp and return temp to parent
    } else if (root->right!=NULL && root->left==NULL) {
      node*temp=root->left;
      delete root;
      return temp;
    }

    //CASE :- When root has two node;

    // recursivly visitng right of root node to find minimum element to replace root value
    // so that its remain BST.

    node*replace=root->right;
    while (replace->left!=NULL) {
      replace=replace->left;  // changing replace value by replace->left until its null;
    }

    //when we find minimum value in left side, we replace root data with replace->data
    root->data=replace->data;

    //now we bind right subtree of root and  delete the replace->data;
    root->right=deleteinBST(root->right,replace->data);

  } else {
    root->right=deleteinBST(root->right,data);
    return root;
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
  std::cout <<'\n';
  std::cout << "Enter element to delete" << '\n';
  int key;
  std::cin >> key;
  root=deleteinBST(root,key);
  BFS(root);
  return 0;
}
