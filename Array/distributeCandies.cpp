#include<bits/stdc++.h>
using namespace std;

void distributeCandies(std::vector<int> nums,int n) {
  std::vector<int> v;
int count=2;
  for (int i = 0; i <nums.size(); i+2) {
    if (nums[i]==1) {
      count++;
    }
  }

if (count>n) {
  std::cout << "true" << '\n';
}
else
std::cout << "false" << '\n';
}

int main(int argc, char const *argv[]) {
  int d;
  int n;
  std::cin >> n;
  std::cin >> d;
  std::vector<int> v;

  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }

  distributeCandies(v,n);

  return 0;
}
