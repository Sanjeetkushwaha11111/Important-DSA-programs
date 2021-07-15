#include<iostream>
#include <algorithm>
using namespace std;

 int rearrange(int array[50],int n){
int j=0;
   for (int i = 0; i <n; i++) {
     if (array[i]<0) {
       if (i!=j) {
         swap(array[i],array[j]);
         j++;
       }
     }
   }
 }

 int printarranged(int array[],int n){
   for (int  i = 0; i <n; i++) {
     std::cout << array[i]<< "\n";
   }
 }

int main(int argc, char const *argv[]) {
  int array[500];
  int n;
std::cin >> n;
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}

  rearrange(array,n);
  printarranged(array,n);
  return 0;
}
