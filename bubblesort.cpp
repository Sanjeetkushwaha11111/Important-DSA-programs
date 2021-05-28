#include <bits/stdc++.h>
using namespace std;

   int bubblesort(int array[],int n){
     int i,j,temp=0;
     for (i = 0; i < n-1; i++) {
        for ( j = 0; j < n-i-1; j++) {
            if (array[j]>array[j+1]) {
            // temp=array[j];
            // array[j]=array[j+1];
            // array[j+1]=temp;
            swap(array[j],array[j+1]);
            }
        }
     }
     for (int i = 0; i <n; i++) {
       std::cout << array[i] << '\n';
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

 bubblesort(array,n);

  return 0;
}
