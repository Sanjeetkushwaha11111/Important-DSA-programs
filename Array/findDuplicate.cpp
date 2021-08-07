#include<bits/stdc++.h>
using namespace std;

// Naive approach;

// int findDuplicate(std::vector<int> nums){
//   sort(nums.begin(),nums.end());
//   for (int i = 0; i <nums.size(); i++) {
//      if (nums[i]==nums[i+1]) {
//        return nums[i];
//      }
//   }
// }

// You must solve the problem without modifying the array nums
// and uses only constant extra space.

int findDuplicate(std::vector<int> nums){

  int end=1;
  int start =0;
 for (int start = 0; start < end; start++) {
   if (nums[start]==nums[end]) {
     return nums[start];
   }
     end++;
 }

 // while (start<end) {
 //      if (nums[start]==nums[end]) {
 //        return nums[start];
 //      }else
 //      start++;
 // }

}

int main(int argc, char const *argv[]) {

std::vector<int> v;
  int n;
  std::cin >> n;

  while (n!=-1) {
    v.push_back(n);
    std::cin >> n;
  }

  std::cout << findDuplicate(v);
  return 0;
}
