#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
std::vector<int> v;
  int d;
  std::cin >> d;
  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }
while (!v.empty()) {
  std::cout << v.front()<< '\n';
  v.pop_back();
}
  return 0;
}
