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

//returns nodes of the tree by visiting left and right node recursivly


int noofNodes(node*root){
  if (root==NULL) {
    return 0;
  }
  return noofNodes(root->left)+noofNodes(root->right)+1;
}

int heightoftheTree(node*root){
  if (root==NULL) {
    return 0;
  }
  int ls=heightoftheTree(root->left);
  int rs=heightoftheTree(root->right);

  return max(ls,rs)+1;
}
void printTree(node*root) {
  if (root==NULL) {
    return;
  }
  std::cout << root->data <<" \n ";
  printTree(root->left);
  printTree(root->right);
  return;
}

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  printTree(root);
  std::cout<<"no of nodes: " << noofNodes(root) << '\n';
  std::cout << "heightoftheTree:" << heightoftheTree(root);

  return 0;
}
