// Deque or Double ended queues are sequence containers with
// the feature of expansion and contraction on both the ends.
//  They are similar to vectors, but are more efficient in case of
//  insertion and deletion of elements at the end, and also the beginning.
//  Unlike vectors, contiguous storage allocation may not be guaranteed.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  deque<int> mydeque;
 mydeque.push_back(3);
 mydeque.push_back(4);
 mydeque.push_back(1);
 mydeque.push_back(7);
 mydeque.push_back(2);
 mydeque.pop_back();
 mydeque.pop_back();

 // Queue becomes 3, 4, 1, 7, 3

 cout << mydeque.front() << '\n';
 std::cout << mydeque.last();
  return 0;
}
