#include<bits/stdc++.h>
using namespace std;

class Stack {
private:
  std::vector<int> v;

public:

     void push(int data) {
       v.push_back(data);
       std::cout << "Pushed into stack." << data <<'\n';
       return;
     }

     bool isEmpty(){
       return v.size()==0;
     }

     void pop() {
       if (!isEmpty()) {
         v.pop_back();
       }
     }

     int getTop(){
       return v[v.size()-1];
     }

};

int main(int argc, char const *argv[]) {
  Stack st;
  for (int i = 1; i <5; i++) {
    st.push(i*i);
  }
  std::cout << "---------------------------" << '\n';

while (!st.isEmpty()) {
  std::cout << "Top on stack is: "<< st.getTop() << '\n';
  st.pop();
}
  return 0;
}
