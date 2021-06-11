#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {

  char str[80];
  char s[80];

  int i;
  std::cout << "Set String" << '\n';
  cin.getline(s,80);
  std::cout << "Enter String " << '\n';
  cin.getline(str,80);
  i=strcmp(str,s);
  if (i==0) {
    std::cout << "Correct"<< '\n';
  } else {
    std::cout << "Incorrect" << '\n';
  }
  return 0;
}
