#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
 {
   int n;
   int array[5];
   std::cout << "Enter the size of array:" << '\n';
   std::cin >> n;
   std::cout << "Enter elements: " << '\n';

   for (int i = 0; i <n; i++) {
     std::cin >> array[i];
   }

   int end=array[n-1];


   std::cout << "last element is: "<< end << '\n';

  return 0;
 }
