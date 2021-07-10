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

//this function return node root
node*buildTree(){
  std::cout << "Enter root" << '\n';
  int d;
  std::cin >> d;
  if (d==-1) {       // if user enter -1, return back to root
                  // i.e., no further expansion of nodes
    return NULL;
  }
  //other wise
  node*root=new node(d);
  std::cout << "Enter Left node" << '\n';
  root->left=buildTree();                        //recursive call left node and add nodes to it, whenever encounter -1 return back to root

  std::cout << "Enter right node:" << '\n';
  root->right=buildTree();                       //recursive call right node and add nodes to it, whenever encounter -1 return back to root

  return root;                                   //in the last return root when no nodes left to be add
}
//preorder traversal of tree
void printInorder(node*root) {
  if (root==NULL) {
    return;
  }
  std::cout <<root->data<<" ," ;

  printInorder(root->left);          //make recursive call for printing for left nodes

  printInorder(root->right);        //make recursive call for printing for right nodes.
}

//Inorder traversal of tree
void printPreOrder(node*root) {
  if (root==NULL) {
    return;
  }
  printPreOrder(root->left);
  std::cout << root->data <<" , ";
  printPreOrder(root->right);
  return;

//Postorder traversal of tree
}void printPostOrder(node*root) {
  if (root==NULL) {
    return;
  }
  printPostOrder(root->left);
  printPostOrder(root->right);
  std::cout << root->data <<" ";

  return;
}
int main(int argc, char const *argv[]) {

  node*root=buildTree();
  std::cout << "In order" << '\n';
  printInorder(root);
  std::cout << "Pre order" << '\n';
  printPreOrder(root);
  std::cout << "Post order" << '\n';
  printPostOrder(root);

  return 0;
}

// I/O  1 2 -1 -1 3 -1 -1

// O/P  1 2 3

//            1
//          /   \
//        2      3
//      /   \   /  \
//    -1   -1  -1  -1
