//two sum part 2
// numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

#include <iostream>
#include <vector>;
using namespace std;


       int addSum(int array[],int n, int t){
         std::vector<int> v;
         int a,b;
         for (int  i = 0; i <n; i++) {
          if(array[i]+array[i+1]==t) {
           a=i;
           b=i+1;
              }
         }
         std::cout << a  <<" "<< b<<'\n';
       }


int main(int argc, char const *argv[]) {
  int n,t;
int array[50];
std::cout << "Enter array size:" << '\n';
std::cin >> n;

std::cout << "Enter elements:" << '\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}
std::cout << "Enter sum target:" << '\n';
std::cin >> t;
  addSum(array,n,t);
  return 0;
}
