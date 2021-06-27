#include<bits/stdc++.h>
using namespace std;

// ((( )))  is balanced paranthesis
// ((( ))   is not balanced
// i.e.,number of opening and balanced must be equal.
// continuosly push opening bracket in stack,
// and whenever we encounter close bracket we pop top from stack....
// if there any bracket left in stack its not balanced.

bool balancedparanthesis(string expresion) {
  stack<char> st;
  for (int i = 0; i <expresion.size(); ++i) {
    char curChar=expresion[i];
    if (curChar=='(') {
      st.push(curChar);
    }
    else if(curChar==')'){
      if (st.empty() || st.top()!='(') {
        return false;
      }
      st.pop();
    }
  }
  return st.empty();
}

int main(int argc, char const *argv[]) {
 string expresion;
 std::cout << "Enter paranthesises" << '\n';
 std::cin >> expresion;

 bool isValid = balancedparanthesis(expresion);
 if (isValid==1) {
   std::cout << "paranthesis are balanced:" << '\n';
 }else
   std::cout << "paranthesis is not balanced:" << '\n';
}
