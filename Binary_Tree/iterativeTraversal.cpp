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

node*buildtree(){
  int d;
  std::cin >> d;
  if (d==-1) {
    return NULL;
  }
  node*root=new node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}
// in iterativeTraversal of binary tree we uses stack DS
// when start pushing left node of root
// and whenever it en encounter with null it pop and print it and
// pushed the right node of the following node

void iterativeTraversal(node*root){
  //initializing stack st
  stack<node*> st;
//pointing current node to root
  node*current=root;
  while (current!=NULL || st.empty()==false) {  //while current not become null
    while (current!=NULL) {                     //go left and when encounters t
      st.push(current);
      current=current->left;
    }
    current=st.top();
    st.pop();
    std::cout << current->data << " ";         //null pop it out and push right of thr root
    current=current->right;
  }
}


void printTree(node*root) {
   if (root==NULL) {
    return;
   }
   std::cout << root->data << " ";
   printTree(root->left);
   printTree(root->right);
   return;
}


int main(int argc, char const *argv[]) {
  node*root=buildtree();
  //printTree(root);
  iterativeTraversal(root);
  return 0;
}
