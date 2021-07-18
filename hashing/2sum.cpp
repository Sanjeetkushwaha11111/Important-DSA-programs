#include<bits/stdc++.h>
using namespace std;


vector<int> twosum(std::vector<int> nums,int target){
  std::vector<int> v;
  int diff;
  int size=nums.size();
  unordered_map<int,int> map;

  for (int i = 0; i < size; i++) {
    diff=target-nums[i];
    if (map.find(diff) != map.end() && map.find(diff)->second !=i) {

        v.push_back(map.find(diff)->second);
        v.push_back(i);
        return v;
    }
    else
    map[nums[i]]=i;
  }

  return v;
  std::cout << v.front() << '\n';
  v.pop_back();
  std::cout << v.front() << '\n';
}


int main(int argc, char const *argv[]) {
  std::vector<int> nums;
std::cout << "Enter target" << '\n';
int t;
std::cin >> t;
std::cout << "Enter target" << '\n';
  int d;
  std::cin >> d;
  while (d!=-1) {
    nums.push_back(d);
    std::cin >> d;
  }

 twosum(nums,t);
  return 0;
}
