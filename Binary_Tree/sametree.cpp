

// sameTree(tree1, tree2)
// 1. If both trees are empty then return 1.
// 2. Else If both trees are non -empty
//      (a) Check data of the root nodes (tree1->data ==  tree2->data)
//      (b) Check left subtrees recursively  i.e., call sameTree(
//           tree1->left_subtree, tree2->left_subtree)
//      (c) Check right subtrees recursively  i.e., call sameTree(
//           tree1->right_subtree, tree2->right_subtree)
//      (d) If a,b and c are true then return 1.
// 3  Else return 0 (one is empty and other is not)


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


 bool sameTree(node*a,node*b){
   if (a==NULL && b==NULL) {
     return true;
   }
   if (a!=NULL && b!=NULL) {

     return (
       a->data == b->data &&
        sameTree(a->left,b->left) &&
        sameTree(a->right,b->right)
      );
   }
   return false;
 }

// this function use breadth First search for printing element of tree,
// with help of queue.

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

int main(int argc, char const *argv[]) {
std::cout << "Enter nodes of tree p" << '\n';
  node*p=buildTree();
BFS(p);


  std::cout<<"\n" << "Enter nodes of tree q" << '\n';
  node*q=buildTree();
  BFS(q);

  if (sameTree(p,q)) {
    std::cout<<"\n" << "Trees are same." << '\n';
  }else
  std::cout << "Trees aren't same." << '\n';


  return 0;
}
