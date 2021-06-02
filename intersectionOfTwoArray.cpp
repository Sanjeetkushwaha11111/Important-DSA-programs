#include<bits/stdc++.h>
using namespace std;

 int intrSection(int arr1[], int arr2[], int n, int m){
   int i=0,j=0;
   while (i<n && j<m) {
     if (arr1[i]<arr2[j]) {
       i++;
     } else if (arr2[j]<arr1[i]) {
       j++;
     } else {
       std::cout <<arr2[j++]<<"\n";
       i++;
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
    intrSection(arr1,arr2,n,m);
  return 0;
}
