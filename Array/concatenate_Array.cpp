#include<bits/stdc++.h>
using namespace std;


void concat(vector<int> &v){
  std::vector<int> nums;
  nums=v;
  //nums.size()=nums.size()+4;
  for (int i = 0; i <=
     v.size(); i++) {
      int d=v[i];
      nums.push_back(d);
  }
  while (!nums.empty()) {
    std::cout << nums.front() << '\n';
    nums.pop_back();
  }
return ;

}

int main(int argc, char const *argv[]) {

  std::vector<int> v;

  int d;
  std::cin >> d;

  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }

 concat(v);

  return 0;
}
