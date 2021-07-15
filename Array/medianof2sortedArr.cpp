#include<bits/stdc++.h>
using namespace std;

void getmedian(int A[],int B[]){
  //int C[10];


}

int main(int argc, char const *argv[]) {
  int A[]={1,2};
  int B[]={3,5,5};

  for ( int i = 0; i <2; i++) {
    A[i+2]=B[i];
  }

  int n = sizeof(B)/sizeof(B[0]);
  std::cout << n << '\n';
  return 0;
}
