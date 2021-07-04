// Method 2 (Using queue)
//
// Algorithm:
// For each node, first the node is visited and then it’s child nodes are put in a FIFO queue.
//
// printLevelorder(tree)
// 1) Create an empty queue q
// 2) temp_node = root /*start from root*/
// 3) Loop while temp_node is not NULL
//     a) print temp_node->data.
//     b) Enqueue temp_node’s children
//       (first left then right children) to q
//     c) Dequeue a node from q.



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


void BFS(node*root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
         node*f=q.front();
         if (f==NULL) {
           std::cout <<'\n';
           q.pop();
           if (!q.empty()) {
             q.push(NULL);
           }
         }
         else{
         std::cout << f->data <<" ";
         q.pop();

         if (f->left) {
           q.push(f->left);
         }
         if (f->right) {
           q.push(f->right);
         }
  }
}
  return;
}

// void printTree(node*root) {
//   if (root=NULL) {
//     return;
//   }
//   std::cout << root->data << '\n';
//   printTree(root->left);
//   printTree(root->right);
//   return;
// }

int main(int argc, char const *argv[]) {
  node*root=buildTree();
  BFS(root);
//printTree(root);
  return 0;
 }
// Time Complexity: O(n) where n is the number of nodes in the binary tree
// Space Complexity: O(n) where n is the number of nodes in the binary tree
