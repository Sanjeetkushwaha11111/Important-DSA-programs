// When Jadoo was in elementary school, he used to play a game in math class that goes as follows.
// All kids sit in a big circle and take turns counting, starting from 1.
// However, the following numbers must be skipped while counting:
// Numbers that have a 3 in its decimal representation.
// The first 15 numbers the kids should say are
// 1 2 4 5 7 8 10 11 14 16 17 19 20 22 25
// Whenever somebody gets a number wrong – says a number that isn't in the sequence or skips a number that is
//  – he's removed from the circle. This goes on until there's only one kid left.
// Jadoo is bad at this game, so he decides to cheat. He asks you to write a program or a function that,
// given a number of the sequence, calculates the next number of the sequence.

#include<iostream>
using namespace std;
      void jadoohatesmaths(int n){

        for ( int i = 0;i<n+2 ; i++) {
          if (i%3==0 || i/100 == 3) {
          }
          else
          std::cout << i << '\n';
        }
}

int main(int argc, char const *argv[]) {

  int n;
 std::cin >> n;
jadoohatesmaths(n);
  return 0;
}
