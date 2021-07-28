#include<bits/stdc++.h>
using namespace std;

bool incresingArray(std::vector<int> nums) {
  int count=0;
  int index=-1;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i]>nums[i+1]) {
      count++;
      index=i;
    }
  }

  if (count>1) {
    return false;
  }
  if (count==0) {
    return true;
  }
  if (index=nums.size()-1 || index==1 ) {
    return true;
  }
  if (nums[index-1]<nums[index+1]) {
    return true;
  }
  if (index-2 >=0 && nums[index-2]< nums[index]) {
      return true;
  }
  if (index<0) {
    return true;
  }

  return false;
}

int main(int argc, char const *argv[]) {
  int d;
  std::cin >> d;
  std::vector<int> v;

  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }

  if (incresingArray(v)) {
    std::cout << "true" << '\n';
  }else
  std::cout << "false" << '\n';
  return 0;
}
