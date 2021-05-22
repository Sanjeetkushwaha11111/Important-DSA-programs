#include<iostream>
#include <algorithm>
using namespace std;

 int doUnion(int arr1[],int n,int arr2[],int m){

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int l=n+m;
    int k;
    int arr3[50];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j <n; j++) {
        while (arr1[i]=arr2[j]) {
          for ( k = 0; k < l; k++) {
            arr3[k]=arr2[j];
          }
          std::cout <<arr3[k];
        }
      }

    }

 }

int main(int argc, char const *argv[]) {
int n;
int arr1[50];
int m;
int arr2[50];

std::cout << "Enter size arr1:" << '\n';
std::cin >> n;
  std::cout << "Enter arr1:" << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> arr1[i];
  }

  std::cout << "Enter size arr2:" << '\n';
  std::cin >> m;
  std::cout << "Enter  arr2:" << '\n';
  for (int i = 0; i < m; i++) {
    std::cin >> arr2[i];
  }

  doUnion(arr1,n,arr2,m);
  return 0;
}
