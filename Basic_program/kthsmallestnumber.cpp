#include<iostream>
#include <algorithm>
using namespace std;

int kthsmallestnumber(int array[],int n,int k){
int i,j;
sort(array,array+n);      /// array sorted here
for ( i = 0; i < n; i++) {
  //std::cout << "\n "<< array[i];
  if (i==k-1) {      //k-1 will point to 1 index less than Kth term
    j=array[i];      //assign i value to j
  }
}
std::cout <<k<<"th smallest number is : " << j;
}


int main(int argc, char const *argv[]) {
  int n,k;
  int array[50];
  std::cout << "Ente array size : " << '\n';
  std::cin >> n;
  std::cout << "Enter array Elements: " << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
  std::cout << "ENter kth :" << '\n';
  std::cin >> k;

  kthsmallestnumber(array,n,k);
  return 0;
}
