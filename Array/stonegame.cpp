#include<bits/stdc++.h>
using namespace std;

 bool stonegame(std::vector<int> nums){
   std::vector<int> alex;
   std::vector<int> lee;

   int size=nums.size();

   for (int i = 0; i < size; i++) {
         int m=max(nums[i],nums[size-1]);
         alex.push_back(m);
         int m1= max(nums[i],nums[size-2]);
         lee.push_back(m1);
   }
int sumAlex=0, sumLee=0;
for (int i = 0; i < alex.size(); i++) {
  sumAlex= sumAlex+alex[i];
}
for (int i = 0; i < lee.size(); i++) {
  sumLee= sumLee+lee[i];
}
  std::cout << sumAlex << sumLee << '\n';
   return (sumAlex>sumLee)?true:false;

 }

int main(int argc, char const *argv[]) {
  std::vector<int> v;
    int n;
    std::cin >> n;

    while (n!=-1) {
      v.push_back(n);
      std::cin >> n;
    }

     stonegame(v)?std::cout << "True":std::cout << "False" << '\n';
  return 0;
}
