#include<bits/stdc++.h>
using namespace std;

int countminArray(int arr[],int n,int k){
  int count=0;
  //int arr[50];
  sort(arr,arr+n);
   for (int i = 0; i < n; i++) {
     if (arr[i]>arr[i+1]) {
       count++;
     }
   }
}

int main(int argc, char const *argv[]) {
int n;
std::cin >> n;
int arr[n];
for (int i = 0; i <n; i++) {
  std::cin >> arr[i];
}


  std::cout <<countminArray(arr,n,1);
  return 0;
}
