#include<bits/stdc++.h>
using namespace std;

bool canBeIncreasing(int arr[],int n)
{
  for (int i = 0; i < n; i++) {
    if (arr[i]<arr[i+1]) {
      return true;
    }
    return false;
  }
}
int main(int argc, char const *argv[]) {
  int arr[50];
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  std::cout << canBeIncreasing(arr,n);
  return 0;

}
