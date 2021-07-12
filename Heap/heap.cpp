#include<bits/stdc++.h>
using namespace std;
// To heapify a subtree rooted with node i which is
// an index in arr[]. N is size of heap
void heapify(int arr[], int n, int i) {

  int largest =i;  // Initialize largest as root
  int left =  2*i+1; // left = 2*i + 1
  int right = 2*i+2; // right = 2*i + 2

  //if left child is larger than root
  if (left< n && arr[left] > arr[largest]) {
    largest=left;
  }

  // if right child is larger than largest so far
  if (right < n && arr[right] > arr[largest]) {
    largest=right;
  }

  // if largest is not root
  if (largest!=i) {
     swap(arr[i],arr[largest]);

     // Recursively heapify the subtree
     heapify(arr,n,largest);
  }

}
// Function to build a Max-Heap from the given array
void buildHeap(int arr[],int n) {

  // Index of last non-leaf node
  int index=(n/2)-1;

     // Perform reverse level order traversal
     // from last non-leaf node and heapify
     // each node
  for (int i = index; i < n ; ++i) {
        heapify(arr,n,i);
  }
}

void printHeap(int arr[], int n) {
  std::cout << "Array representation of Heap:" << '\n';

  for (int i = 0; i < n; i++) {
       std::cout << arr[i] << " ";
       std::cout <<'\n';
  }

}

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  buildHeap(arr,n);
  printHeap(arr,n);
  return 0;
}
