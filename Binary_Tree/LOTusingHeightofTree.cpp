
// /*Function to print level order traversal of tree*/
// printLevelorder(tree)
// for d = 1 to height(tree)
//    printCurrentLevel(tree, d);
//

// /*Function to print all nodes at a current level*/
// printCurrentLevel(tree, level)
// if tree is NULL then return;
// if level is 1, then
//     print(tree->data);
// else if level greater than 1, then
//     printCurrentLevel(tree->left, level-1);
//     printCurrentLevel(tree->right, level-1);

//  Level order traversal of a tree is breadth first traversal of the tree.

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

void getLevelOrder(node*root) {
  for (int i= 1 ; i <= height(root); i++) {
    std::cout << "level "<<i<<"\n";
    printCurrentLevel(root,i);
    std::cout << '\n';
  }
}

void printTree(node*root) {
  if (root==NULL) {
    return;
  }
  std::cout << root->data << "\n";
  printTree(root->left);
  printTree(root->right);
  return;
}

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  //printTree(root);
  //std::cout << "heightoftheTree" <<height(root) ;
  //printCurrentLevel(root,3);
  getLevelOrder(root);

  return 0;
}
// Time Complexity: O(n^2) in worst case.
// For a skewed tree, printGivenLevel() takes O(n) time where n is the number of nodes in the skewed tree.
// So time complexity of printLevelOrder() is O(n) + O(n-1) + O(n-2) + .. + O(1) which is O(n^2).
// Space Complexity: O(n) in worst case. For a skewed tree, printGivenLevel() uses O(n) space for call stack.
// For a Balanced tree, the call stack uses O(log n) space, (i.e., the height of the balanced tree).
