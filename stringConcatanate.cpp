#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char s1[80];
  char s2[80];

  std::cout << "Enter 1st String:" << '\n';
  cin.getline(s1,80);
  std::cout << "Enter 2nd String:" << '\n';
  cin.getline(s2,80);
  strcat(s1,s2);   //this is function for string Concatnation it assign second string in 1st string.
  std::cout << "Concatnated string is: " << s1 << '\n';
  return 0;
}
