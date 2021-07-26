#include<bits/stdc++.h>
using namespace std;

void shuffleArrays(std::vector<int> nums, int n) {
  std::vector<int> v;
  for (int i = 0; i < nums.size(); i++) {
    v.push_back(nums[i]);
    v.push_back(nums[i+n]);
  }

  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << '\n';
    v.pop_back();
  }

}

int main(int argc, char const *argv[]) {
  std::vector<int> v;
  std::cout << "N:" << '\n';
  int N;
  std::cin >> N;
    int d;
    std::cin >> d;

    while (d!=-1) {
      v.push_back(d);
      std::cin >> d;
    }

    shuffleArrays(v,N);
    return 0;
  return 0;
}
