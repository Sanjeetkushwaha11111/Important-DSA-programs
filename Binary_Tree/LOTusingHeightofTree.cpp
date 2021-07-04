#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node*left;
  node*right;

  node(int d){
    data=d;
    left==NULL;
    right=NULL;
  }
};

// buildTree using recursive method

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


//heightoftheTree

int height(node*root){
  if (root==NULL) {
      return 0;
  }
  int ls=height(root->left);
  int rs=height(root->right);
  return max(ls,rs)+1;
}

//LevelTraversing

void printCurrentLevel(node*root,int level) {
  if (root==NULL) {
    return;
  }
  if(level==1) {
    std::cout << root->data << "   ";
  }
  else if(level>1){
  printCurrentLevel(root->left,level-1);
  printCurrentLevel(root->right,level-1);
  return;
       }
}

void printLevelOrder(node*root) {
  for (int i= 1 ; i <= height(root); i++) {
    std::cout << "level "<<i<<"\n";
    printCurrentLevel(root,i);
    std::cout << '\n';
  }
}

// void printTree(node*root) {
//   if (root==NULL) {
//     return;
//   }
//   std::cout << root->data << "\n";
//   printTree(root->left);
//   printTree(root->right);
//   return;
// }

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  //printTree(root);
  //std::cout << "heightoftheTree" <<height(root) ;
  //printCurrentLevel(root,3);
  printLevelOrder(root);

  return 0;
}
