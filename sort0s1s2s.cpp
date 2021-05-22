#include<iostream>
#include<algorithm>
using namespace std;

int sort012(int array[],int n){
  sort(array,array+n);
  for (int i = 0; i < n; i++) {
    std::cout <<array[i];
  }
}

int main(int argc, char const *argv[]) {
  int n,array[50];
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
  sort012(array,n);
  return 0;
}
