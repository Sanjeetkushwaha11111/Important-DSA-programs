// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
#include<iostream>
using namespace std;

      int plusone(int array[],int n){
        int t;
        t=array[n-1];
        t++;
        array[n-1]=t ;
        std::cout << array[n-1] << '\n';

        // for (int i = n; i<=n; i++) {
        //   t=array[n-1];
        //   t++;
        //   array[n-1]=t ;
        // }
        // for (int i = 0; i <n; i++) {
        //   std::cout << array[i] << '\n';
        // }
      }

int main(int argc, char const *argv[]) {
  int n;
int array[50];
std::cout << "Enter array size:" << '\n';
std::cin >> n;
std::cout << "Enter elements:" << '\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}

   plusone(array,n);
  return 0;
}
