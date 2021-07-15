#include<iostream>
using namespace std;

int minmax(int array[],int n)
{
int  max=array[0]; // intialized index 0 as max
  int min=array[0]; // intialized index 0 as min

  for (int i = 0; i <n; i++)
   {
       if (array[0]<array[i])
       max=array[i];        //replacing index 0 with max

      if (array[0]>array[i])
      min=array[i];         //replacing index 0 with min
  }

  std::cout << "max is "<< max << '\n';
  std::cout << "min is: " <<min << '\n';
}

int main(int argc, char const *argv[]) {
  int n,max,min,temp;
  int array[50];
  std::cout << "Enter array size:" << '\n';
  std::cin >> n;
  std::cout << "Enter elements:" << '\n';
  for (int i = 0; i <n; i++) {
    std::cin >> array[i];
}
   minmax(array,n);
  return 0;
}
