#include <bits/stdc++.h>
using namespace std;

 bool add(int a,int b) {
   if (a+b==11) {
     return true;
   }
   return false;
 }

 int main(int argc, char const *argv[]) {
   int a=5,b=5,c;
   std::cout<<add(a,b);
   return 0;
 }
