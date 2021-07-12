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



// An empty tree is height-balanced. A non-empty binary tree T is balanced if:
// 1) Left subtree of T is balanced
// 2) Right subtree of T is balanced
// 3) The difference between heights of left subtree and right subtree is not more than 1.

// we define a class HBPair, consist of Heoght and balance.

class HBPair{
public:
  int height;
  bool balance;
};


// since the isheightbalance function return the
// hieght and bool vlaue of balance
// we need a pair so we use HBPair for returning both the values

HBPair isheightbalance(node*root){
  HBPair p;                               // we define a pair 'p' of HBPair

  if (root==NULL) {
    p.height=0;
    p.balance=true;
    return p;                            //since null tree have 0 height and always Balanced
  }

 HBPair left=isheightbalance(root->left);
 HBPair right=isheightbalance(root->right);

 p.height=max(left.height,right.height)+1;    //it return height from left and right tree

 if (abs(left.height-right.height)<=1 && left.balance && right.balance) {
   p.balance =true;
 }
   p.balance =false;
  return p;
}


void printTree(node*root){
  if (root==NULL) {
    return ;
  }
  std::cout << root->data << " ";
  printTree(root->left);
  printTree(root->right);
  return;
}

  int main(int argc, char const *argv[]) {
  node*root=buildTree();
  //printTree(root);

  if (isheightbalance(root).balance) {
  std::cout << "Tree is Height Balanced" << '\n';
}else{
  std::cout << "Tree is not Height Balanced" << '\n';
}
  return 0;
}
