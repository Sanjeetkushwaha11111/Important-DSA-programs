#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

// inbuilt implementation of MAX HEAP in STL
// it auto. arrange the heapp in decreasing irder.....

  priority_queue<int> pq;

  int data;
  std::cin >> data;

  while (data!=-1) {
    pq.push(data);
    std::cin >> data;
  }

  //printing the heap by printing the top element and
  // after that make the top element popout

  while (!pq.empty()) {
    std::cout << pq.top() << '\n';
    pq.pop();
  }
  return 0;
}
