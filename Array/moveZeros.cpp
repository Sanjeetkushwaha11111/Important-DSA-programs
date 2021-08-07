#include<bits/stdc++.h>
using namespace std;


 void moveZeros(std::vector<int> nums) {
   int n=nums.size();

  int count=0;
  for (int i = 0; i <n; i++) {
    if (nums[i]!=0) {
      nums[count++]=nums[i];
    }
  }

  for (int i = count; i < n; i++) {
    nums[i]=0;
  }

  for (int i = count; i < n; i++) {
    std::cout <<nums[i]<<"\n";
  }

 }

int main(int argc, char const *argv[]) {
  std::vector<int> v;
    int n;
    std::cin >> n;

    while (n!=-1) {
      v.push_back(n);
      std::cin >> n;
    }

    moveZeros(v);
  return 0;
}
