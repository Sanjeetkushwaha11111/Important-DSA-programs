#include<bits/stdc++.h>
using namespace std;

void sumOneD(std::vector<int> nums) {
  std::vector<int> v;
  for (int i = 0; i < nums.size(); i++) {
    int sum=0;
    for (int j = i; j <=nums.size(); j++) {
      int sum=sum[i];
      v.push_back(sum);
    }
  }


  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << '\n';
    v.pop_back();
  }
}

int main(int argc, char const *argv[]) {
  std::vector<int> nums;
  int d;
  std::cin >> d;
  while (d!=-1) {
    nums.push_back(d);
    std::cin >> d;
  }

  sumOneD(nums);
  return 0;
}
