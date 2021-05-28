// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
//-----------------------------------
// Example 2:
// Input: s = "rat", t = "car"
// Output: false
#include<bits/stdc++.h>
using namespace std;

bool check_anagram(string s,string t){

  sort(s.begin(), s.end());
	sort(t.begin(), t.end());
		return s == t;


}


int main(int argc, char const *argv[]) {
  string s;
  std::cout << "Enter first word.." << '\n';
  std::cin >> s;
  string t;
  std::cout << "Enter second word.." << '\n';
  std::cin >> t;
  std::cout <<check_anagram(s,t);
  return 0;
}
