#include<iostream>
using namespace std;


// A subbarray is a contiguous part of array.
//  An array that is inside another array.
//   For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
//   The subbarays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4).
//    In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/subsrings.

int  SubArray(int array[],int n){
  int i,j,k;
  static  int arr[100];
  for (i = 0; i <n; i++) {
    for ( j = i; j <n; j++) {    //j should always be less then i bcz it cannot iterate in reverse direction
      for (k = i; k <=j; k++) {
        std::cout<<"{"<<array[k]<<"}";
      }
      std::cout <<  '\n';
    }
  }
}

int main(int argc, char const *argv[]) {
  int n,array[100];
  std::cout << "ENter the size of array:"  << '\n';
  std::cin >> n;
  std::cout << "Enter the element of array:" << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
SubArray(array,n);
  return 0;
}
