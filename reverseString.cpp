#include<bits/stdc++.h>
using namespace std;


  void rev_String(string str) {
      for (int i = str.length();i>=0; i--) {
        std::cout << str[i];
      }
  }

int main(int argc, char const *argv[]) {
  char str[50];
  std::cout << "Enter String:" << '\n';
  cin.getline(str,50);
  rev_String(str);

  return 0;
}
