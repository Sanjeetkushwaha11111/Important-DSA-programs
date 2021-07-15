#include<iostream>
using namespace std;

    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.



int main(int argc, char const *argv[]) {
  int j,i = 4;
  double g,f = 4.0;
  String s = "HackerRank";
  char str[1000];
std::cin >> j;
std::cin >> g;


int k=i+j;
double b=g+f;
cin.getline(std,1000);

  std::cout << k << '\n';
  std::cout << b << '\n';
  strcat(s,str);
  std::cout << s << '\n';
  return 0;
}
