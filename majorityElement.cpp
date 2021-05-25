   #include<iostream>
using namespace std;

         int majorityElement(int array[],int n){
              int temp,a;
          for (int i = 0; i <n; i++) {
            if (temp==0)
              a=i;
            if (array[i]==array[a]) {

              temp++;
            }else
            temp--;

          }
std::cout <<"number is "<<  a << '\n';
         }
         // for(int i=0; i<nums.size(); i++)
         //       {
         //           if(count == 0) a=i;
         //           if(nums[i]==nums[a]) count++;
         //           else count--;
         //
         //       }
int main(int argc, char const *argv[]) {
  int n;
int array[50];
std::cout << "Enter array size:" << '\n';
std::cin >> n;

std::cout << "Enter elements:" << '\n';
for (int i = 0; i <n; i++) {
  std::cin >> array[i];
}
  majorityElement(array,n);
  return 0;
}
