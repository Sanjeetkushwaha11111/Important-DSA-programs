#include<bits/stdc++.h>
using namespace std;

void check_pass(string p) {
  string str;
  std::cout << "Enter Password to login:" << '\n';
std::cin >> str;
if (str==p) {
   std::cout << "Correct Password! Logged In" << '\n';
}else
std::cout << "Incorrect Password! Try again." << '\n';
}

int main(int argc, char const *argv[]) {
  string p;
  std::cout << "Set Password: " << '\n';
  std::cin >> p;

  check_pass(p);
  return 0;
}
