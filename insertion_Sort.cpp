#include<bits/stdc++.h>
using namespace std;

int insertion_Sort(int array[],int n){

   int temp=0;
   for (int i = 1; i <n-1; i++) {
     for (int j = i+1; j <n; j++) {
      temp=array[i];
      j=i-1;
      while (temp<array[j] && j>=0) {
          array[j+1]=array[j];
          j=j-1;
      }
      array[j+1]=temp;
       }
       for (int i = 0; i < n ; i++) {
         std::cout << array[i] << '\n';
       }
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

 insertion_Sort(array,n);
  return 0;
}
