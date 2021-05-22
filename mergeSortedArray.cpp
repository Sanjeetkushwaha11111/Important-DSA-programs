#include<iostream>
using namespace std;

  int mergeSortedArray(int arr1[],int arr2[],int n, int m)
    {  int array[50];
       int i,j=0,k=0,v=0;
       int max=n+m;
       while (v<max) {
               if (j<n) {
                 array[v]=arr1[j];
                 j++;
                 v++;
               }
               if (k<m) {
                 array[v]=arr2[k];
                 k++;
                 v++;
               }
       }
       for (i = 0; i < max; i++) {
         std::cout << array[i] << '\n';
       }
       return 0;

    }
int main(int argc, char const *argv[]) {
  int arr1[50],arr2[50],n,m;
std::cout << "Enter size of arr1[] " << '\n';
std::cin >> n;
for (int i = 0; i < n; i++) {
  std::cin >> arr1[i];
}
std::cout << "Enter size of arr2[] " << '\n';
std::cin >> m;
for (int i = 0; i < m; i++) {
  std::cin >> arr2[i];
}

  mergeSortedArray(arr1,arr2,n,m);

  return 0;
}
