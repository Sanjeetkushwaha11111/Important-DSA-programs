#include<iostream>
using namespace std;

  int rotArray(int array[], int n){

    int temp=array[0],i;
    for (i = 0; i <n; i++)
      array[i]=array[i+1];
      array[n-1]=temp;
  }
  int rotArrayBy(int array[],int n){
    rotArray(array,n);
    for (int i = 0; i < n; i++) {
      std::cout << array[i]<<" ";
    }
  }

int main(int argc, char const *argv[]) {
  int n;
  int array[50];
  std::cin >> n;
  for (int i = 0; i <n; i++) {
    std::cin >> array[i];
  }
  rotArrayBy(array,n);
  return 0;
}
