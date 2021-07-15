#include<bits/stdc++.h>
using namespace std;
char rev_String(string str) {
  char s[20];
    for (int i = str.length();i>=0; i--) {
            s[i]= str[i];
           }
           return s;
}

int main(int argc, char const *argv[]) {
  char str[50];
  std::cout << "Enter String:" << '\n';
  cin.getline(str,50);
  std::cout <<rev_String(str);


  return 0;
}
