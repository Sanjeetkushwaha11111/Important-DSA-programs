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

  // sort(s.begin(), s.end());
	// sort(t.begin(), t.end());
	// 	return s == t;

  if (s.length != t.length {
    return false;
  }
  int count [256] ={0};

  for (int i = 0; i <s.length; i++) {
    count[s[i]]++;   // Counting occurence of evry character and incrementing Counting
  }
  for (int i = 0; i < s.length; i++) {
    count[t[i]]--;  // if character matches from previous count we decrement its Counting

  }

for (int i = 0; i < 256; i++) {
  if (count[i] !=0) {  // if count is not empty or zero its not anagram;
    return false;
  }
  return true;
}

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
