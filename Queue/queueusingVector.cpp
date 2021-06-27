#include<bits/stdc++.h>
using namespace std;

class queue{
private:
  std::vector<int> queue;
public:

  void push(int data) {
    queue.push_back(data);
    return;
  }

  void pop() {
    if (!isEmpty()) {
      queue.pop_back();
      return;
    }
    std::cout << "Queue is empty." << '\n';
    return;
  }

  bool isEmpty(){
    return queue.size()==0;
  }

  int getTop(){
    return queue[queue.size()-1];
  }
};

int main(int argc, char const *argv[]) {
   queue Q;
   Q.push(1);
   Q.push(2);
   Q.push(3);
   std::cout << getTop() << '\n';




  return 0;
}
