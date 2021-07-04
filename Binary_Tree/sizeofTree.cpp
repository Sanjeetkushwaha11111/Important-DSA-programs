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


//returns size of the tree by visiting left and right node recursivly

int sizeofTree(node*root){
  if (root==NULL) {
    return 0;
  }
  return 1+sizeofTree(root->left)+sizeofTree(root->right);
}

//returns height of the tree by visiting left and right node recursivly

int height(node*root){
  if (root==NULL) {
    return 0;
  }
  else
  {
    //leftsubtree
  int ls=height(root->left);
    //rightsubtree
  int rs=height(root->right);

    return max(ls,rs)+1;
  }
}


void print(node*root) {
  if (root==NULL) {
    return;
  }

  std::cout <<"\t"<<root->data<<"\t" ;
  print(root->left);
  print(root->right);
}

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  print(root);
  std::cout <<"\n"<<" size of Tree: "<< sizeofTree(root) << '\n';

  std::cout <<"\n"<<" height of Tree: "<< height(root) << '\n';

  return 0;
}
