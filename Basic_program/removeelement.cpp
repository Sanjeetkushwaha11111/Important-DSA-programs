#include<iostream>
using namespace std;

    int reomveelement(int array[], int n, int e){

          for (int i = 0; i < n; i++) {
            if (array[i]==e) {
              array[i]=array[i-1];
            }
          }
      std::cout << array[i] << '\n';
    }

int main(int argc, char const *argv[]) {
  int n,e;
  int array[50];
  std::cout << "Enter array size:" << '\n';
  std::cin >> n;
  std::cout << "Enter element to be deleted:" << '\n';
  std::cin >> e;
  std::cout << "Enter elements:" << '\n';
  for (int i = 0; i <n; i++) {
    std::cin >> array[i];
}

reomveelement(array,n,e);
  return 0;
}
