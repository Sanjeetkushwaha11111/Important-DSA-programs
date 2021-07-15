// Given an integer array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3]....
// You may assume the input array always has a valid answer.
// Example 1:
// Input: nums = [1,5,1,1,6,4]
// Output: [1,6,1,5,1,4]
// Explanation: [1,4,1,5,1,6] is also accepted.
//------------------------------------
// Example 2:
// Input: nums = [1,3,2,2,3,1]
// Output: [2,3,1,3,1,2]
#include<bits/stdc++.h>
using namespace std;
   int Wiggle_Sort(int array[],int n){
        sort(array,array+n);
        for (int i = 1; i <n-1; i=i+2) {
             if (array[i]<array[i+1]) {
               swap(array[i],array[i+1]);
             }
        }
        for (int i = 0; i < n; i++) {
          std::cout << array[i];
        }
     }
int main(int argc, char const *argv[]) {
  int n;
  int array[50];
  std::cout << "Enter array size:" << '\n';
  std::cin >> n;

  std::cout << "Enter elements:"<<'\n';
  for (int i = 0; i <n; i++) {
    std::cin >> array[i];
  }
         Wiggle_Sort(array,n);
  return 0;
}
