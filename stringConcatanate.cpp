#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char s1[80];
  char s2[80];

  std::cout << "Enter 1st String:" << '\n';
  cin.getline(s1,80);
  std::cout << "Enter 2nd String:" << '\n';
  cin.getline(s2,80);
  strcat(s1,s2);
  std::cout << "Concatnated string is: " << s2 << '\n';
  return 0;
}
