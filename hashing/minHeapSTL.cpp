#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

  priority_queue<int,vector<int>,generator<int> > pq;

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
