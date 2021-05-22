#include<iostream>
using namespace std;

int searchInsert(int array[],int n, int t){

    for (int i = 0; i < n; i++) {
      if (array[i]==t) {
        std::cout <<i << '\n';
      }
      else
      std::cout << n << '\n';

    }

}
int main(int argc, char const *argv[]) {
  int n,t;
int array[50];
std::cout << "Enter array size:" << '\n';
std::cin >> n;
std::cout << "Enter search target:" << '\n';
std::cin >> t;
std::cout << "Enter elements:" << '\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}
searchInsert(array,n,t);
  return 0;
}
