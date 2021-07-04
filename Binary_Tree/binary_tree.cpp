// Trees: Unlike Arrays, Linked Lists, Stack and queues,
// which are linear data structures, trees are hierarchical data structures.
// Tree Vocabulary: The topmost node is called root of the tree.
//  The elements that are directly under an element are called its children.
//   The element directly above something is called its parent.
//   For example, ‘a’ is a child of ‘f’, and ‘f’ is the parent of ‘a’.
//    Finally, elements with no children are called leaves.


    // tree
    // ----
    //      j    <-- root
    //    /   \
    //   f    k
    //  /   \      \
    // a     h      z    <-- leaves

#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node*left;
  node*right;

  node(int d){
    data=d;
    //initially left and right node of tree is null
    left=NULL;
    right=NULL;
  }
};

int main(int argc, char const *argv[]) {

//initializing root node as 1
node*root=new node(1);

//           1
//         /   \
//       null   null

root->left=new node(2);


//           1
//         /   \
//        2    null

root->right=new node(3);

//           1
//         /   \
//        2     3

root->left->left=new node(4);

//           1
//         /   \
//        2     3
//      /   \
//     4    null


  return 0;

}
