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

int height(node*root){
  if (root==NULL) {
    return 0;
  }
  int ls=height(root->left);
  int rs=height(root->right);

  return max(ls,rs)+1;
}


int diameter(node*root){
  if (root==NULL) {
    return 0;
  }
  int h1=height(root->left);
  int h2=height(root->right);
  int op1=h1+h2;
  int op2=diameter(root->left);
  int op3=diameter(root->right);

  return max(op1, max(op2,op3));
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
  std::cout << '\n'<< diameter(root) << '\n';
  return 0;
}
