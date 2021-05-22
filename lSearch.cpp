#include<iostream>
using namespace std;

int lSearch(int array[], int k, int n){
  int i=0;
  for (i = 0; i <n; i++)
    if (array[i]==k)
    return i;
         return -1;

}

int main(int argc, char const *argv[]) {
  int n;
  int array[100];
  std::cout << "Enter the size of array" << '\n';
   std::cin >> n;
   std::cout << "Enter the Elements of array" << '\n';
   for (int i = 0; i <n; i++) {
     std::cin >> array[i];
   }
   int k;
std::cout << "Enter element to be searched: " << '\n';
std::cin >> k;
  std::cout << "Element present at: " <<lSearch(array,k,n);
  return 0;
}
