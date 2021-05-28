#include<bits/stdc++.h>
using namespace std;

largest_number(int array[],int n){

  sort(array,array+n);
  for (int i=n-1; i>=0; i--) {
    std::cout << array[i];
  }

}
int main(int argc, char const *argv[]) {
  int n;
  int array[50];
  std::cout << "Enter array size:" << '\n';
  std::cin >> n;

  std::cout << "Enter elements:"<<'\n';
  for (int i = 0; i <n; i++) {
    std::cin >> array[i];
  }

   largest_number(array,n);

  return 0;
}
