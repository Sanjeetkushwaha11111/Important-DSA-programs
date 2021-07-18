#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {


  //minHeap implementation in STL
  // it uses inbuilt function
  // greater functon is used to compare two value and return the lower one
  priority_queue<int,vector<int>,greater<int> > pq;

  int data;
  std::cin >> data;

  while (data!=-1) {
    pq.push(data);
    std::cin >> data;
  }

  //printing the minHeap;

  while (!pq.empty()) {
       std::cout << pq.top() << '\n';
      pq.pop();
  }

  return 0;
}
