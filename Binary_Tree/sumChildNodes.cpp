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

node*buildTree(){
  int d;
  std::cin >> d;
  if (d==-1) {
    return NULL;
  }
  node*root=new node(d);
  root->left=buildTree();
  root->right=buildTree();
  return root;
}

int  SumChild(node*root){
  if (root==NULL) {
    return 0;
  }
  if (root->left==NULL || root->right==NULL) {
    return root->data;
  }
  int leftsum=SumChild(root->left);
  int rightsum=SumChild(root->right);
  int temp=root->data;
  root->data=leftsum+rightsum;
  return temp+root->data;
}

void  printTree(node*root) {
  if (root==NULL) {
    return;
  }
  std::cout << root->data << " ";
  printTree(root->left);
  printTree(root->right);
  return;
}

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  printTree(root);
  std::cout <<  '\n';
  SumChild(root);
  std::cout <<  '\n';
  printTree(root);
  return 0;
}
