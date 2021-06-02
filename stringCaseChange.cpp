#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
//
// This program changes upper case letters to lower case letters,
// using ASCII table
//
//           65-90 --> 'A' to 'Z',
//           97-122--> 'a' to 'z'.
//           32 => Diff. b/w lower and upper case
//

void interchangeCase(char str[]) {
  int i,temp;
  int str_length= strlen(str);
  for (i = 0; i <str_length; i++) {
         temp=(int)str[i];   //stores the each char value in form of int

         if (temp>=65 && temp<=90) {
            str[i]=(char)temp+32; //adding 32 changes char value from upper to lower case
         }else if (temp>=97 && temp<=122) {
           str[i]=(char)temp-32;
         }
  }
}

int main(int argc, char const *argv[]) {
  char str[50];
  std::cout << "Enter String:" << '\n';
      cin.getline(str,50);
   interchangeCase(str);
   std::cout << str << '\n';
  return 0;
}
