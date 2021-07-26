#include<bits/stdc++.h>
using namespace std;


void concat(vector<int> ans){
std::vector<int> v;
for (int i = 0; i < ans.size() ; i++) {
  v.push_back(ans[i]);
}
int n=v.size()+ans.size();
for (int i = 0; i < n ; i++) {
  v.push_back(ans[i]);
}

for (int i = 0; i<n ; i++) {
  std::cout << v[i] << '\n';
  v.pop_back();
}
return;

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
