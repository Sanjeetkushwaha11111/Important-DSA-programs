#include<iostream>
using namespace std;

// 2SUM
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

int twosum(int array[],int n,int t){
    int a=0,b=0;
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j <n; j++) {
        if (array[i]+array[j]==t) {
          a=i;
          b=j;
        }
      }
    }
    std::cout <<"["<< a <<" , "<< b<<"]";
  }

int main(int argc, char const *argv[]) {

  int t,n,array[100];
  std::cout << "ENter the size of array:"  << '\n';
  std::cin >> n;
  std::cout << "Enter target sum" << '\n';
  std::cin >> t;
  std::cout << "Enter the element of array:" << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
twosum(array,n,t);
  return 0;
  return 0;
}
