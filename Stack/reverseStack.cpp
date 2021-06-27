#include<bits/stdc++.h>
using namespace std;

void insertatBottom(stack<int> &st,int temp) {

if (st.empty()) {
  st.push(temp);
  return;
}
  int top=st.top();
  st.pop();
  insertatBottom(st,temp);

  st.push(top);
}

void reverse(stack<int> &st){   //pass by reference
if (st.empty()) {
  return;
}
  int temp=st.top();
  st.pop();
  reverse(st);
  insertatBottom(st,temp);
 }


int main(int argc, char const *argv[]) {


  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  std::cout << "After reversing...." << '\n';
  reverse(st);
  while (!st.empty()) {
    std::cout <<st.top() <<"|";
    st.pop();
  }
  std::cout << '\n';
  return 0;
}
