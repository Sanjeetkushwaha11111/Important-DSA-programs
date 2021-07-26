#include<bits/stdc++.h>
using namespace std;

void goodPairs(std::vector<int> v) {
  int count=0;
  for (int i = 0; i < v.size(); i++) {
    for (int j = i; j < v.size(); j++) {
      if (v[i]==v[j] && i<j) {
         count++;
      }
    }
  }
  std::cout << count << '\n';
}

int main(int argc, char const *argv[]) {
  int d;
  std::cin >> d;
  std::vector<int> v;

  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }

  goodPairs(v);
  return 0;
}
