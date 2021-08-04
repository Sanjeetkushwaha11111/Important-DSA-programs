#include<bits/stdc++.h>
using namespace std;


 bool isArraySorted(int arr[], int n){
   if (n==1) {
     return true;
   }
   return (arr[n-1]<arr[n-2]?0:isArraySorted(arr,n-1));
 }


int main(int argc, char const *argv[]) {
  int arr[100];
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  if (isArraySorted(arr, n)) {
    std::cout << "True" << '\n';
  }else
  std::cout << "False" << '\n';

  
  return 0;
}
