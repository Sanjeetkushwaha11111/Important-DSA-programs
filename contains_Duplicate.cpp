// Given an integer array nums and two integers k and t, return true if there are two distinct
// indices i and j in the array such that
// abs(nums[i] - nums[j]) <= t and abs(i - j) <= k.
// Example 1:
// Input: nums = [1,2,3,1], k = 3, t = 0
// Output: true
// Input: nums = [1,5,9,1,5,9], k = 2, t = 3
// Output: false


#include<bits/stdc++.h>
using namespace std;

  bool contains_duplicate(int array[],int n,int k,int t){
   //bool flag=0;
  // sort(array,array+n);
   for (int i = 0; i<n; ++i) {
     for (int j = i+1; j<i+1+k; ++j) {
       if (j<n) break;
       if (abs((long long)array[i]-array[j]<=t)) {     //abs=absolute
          return true;
       }
    }
   }
   return false;
  }

int main(int argc, char const *argv[]) {
  int n,k,t;
int array[50];
std::cout << "Enter array size:" << '\n';
std::cin >> n;

std::cout << "Enter elements:"<<'\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}
std::cout << "Enter K" << '\n';
std::cin >> k;

std::cout << "Enter T" << '\n';
std::cin >> t;

 std::cout <<contains_duplicate(array,n,k,t);
  return 0;
}
