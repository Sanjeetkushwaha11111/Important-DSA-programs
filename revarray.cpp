#include<iostream>
using namespace std;

int revArray(int array[],int n){
  int i;
  for (i = n-1; i>=0; i--) {
    std::cout << array[i]<<" , ";
  }
}

int main(int argc, char const *argv[]) {
  int array[50];
  int n;
  std::cout << "ENter array size: " << '\n';
std::cin >> n;
std::cout << "Enter array elements: " << '\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}
revArray(array,n);
  return 0;
}
