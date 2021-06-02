#include<bits/stdc++.h>
using namespace std;

  string printstr(string str){

    std::cout << "Enterd string is :"<< str <<" of lenght "<<str.length() <<'\n';
  }

int main(int argc, char const *argv[]) {
  string str;
 std::cout << "Enter String:" << '\n';
  std::cin >> str;
  printstr(str);
  return 0;
}
