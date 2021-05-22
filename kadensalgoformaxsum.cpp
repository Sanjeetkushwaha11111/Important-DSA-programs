#include<iostream>
using namespace std;

int maxsum(int array[],int n){
  int cs,ms=0;

  for (int i = 0; i <n; i++) {
    cs=cs+array[i];
  ms =max(cs,ms);
  if (cs<0) {
    cs=0;
  }
  }
  return ms;
}

int main(int argc, char const *argv[]) {
  int array[100];
  int n;
  std::cin >> n;
for (int i = 0; i < n; i++) {
  std::cin >> array[i];
}

  std::cout << "max sum is :" <<maxsum(array,n);

  return 0;
}
