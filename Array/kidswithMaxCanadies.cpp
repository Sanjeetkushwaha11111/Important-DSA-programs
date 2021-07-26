#include<bits/stdc++.h>
using namespace std;


void maxCandies(std::vector<int> Candies,int EC) {
  std::vector<bool> result;
  std::vector<int> sumCandies;


  int n=Candies.size();
  int maxCandies=0;

  for (int i = 0; i < n; i++) {
    if (Candies[i]> maxCandies) {
      maxCandies=Candies[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (Candies[i]+EC>=maxCandies) {
      result.push_back(true);
    }
    else
    result.push_back(false);
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << '\n';
    result.pop_back();
  }

}


int main(int argc, char const *argv[]) {

std::vector<int> v;
std::cout << "Extra Candies:" << '\n';
int EC;
std::cin >> EC;
  int d;
  std::cin >> d;

  while (d!=-1) {
    v.push_back(d);
    std::cin >> d;
  }

  maxCandies(v,EC);
  return 0;
}
