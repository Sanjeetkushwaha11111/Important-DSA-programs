#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
int n;
int array[50]; // max 50 elemnt it can take

  std::cout << "Enter the size of array: " << '\n';
  std::cin >> n;
  std::cout << "Enter the elements of array: " << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
  std::cout << "Elemetns are " << '\n';
  for (int i = 0; i < n; i++) {
    std::cout << array[i] <<" at index: "<<i<< '\n';
  }
  return 0;
}
