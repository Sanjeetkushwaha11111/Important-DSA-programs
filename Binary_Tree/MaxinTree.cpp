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


int getmax(node*root){
  if (root==NULL) {
    return 0;
  }
  return max(root->data, max(getmax(root->left), getmax(root->right))) ;

}

void printTree(node*root){
  if (root==NULL) {
    return;
  }
  std::cout << root->data << "  ";
  printTree(root->left);
  printTree(root->right);
  return;
}


int main(int argc, char const *argv[]) {
  node*root=buildTree();
//  printTree(root);
  std::cout << getmax(root);
  return 0;
}
