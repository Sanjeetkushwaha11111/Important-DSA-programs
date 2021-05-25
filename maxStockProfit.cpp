// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Example 2:
//
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

#include<iostream>
using namespace std;

  int maxStockProfit(int arrPrice[],int n){

      int buy=0,sell=0;
      int i;
      if (n==1) {
        return 0; //Prices must be atleast for 2 days
      }
      while (i<n-1) {
        //here we find local minima as buy day and store it
        while ((i<n-1) && (arrPrice[i+1]<=arrPrice[i])) {
          i++;
          if (i==n-1) {
            break;
          }
          buy=i++; //index of minima
        }
        while ((i<n-1) && (arrPrice[i]>=arrPrice[i-1])) {
          i++;
          if (i==n-1) {
            break;
          }
          sell=i-1;
        }

      }
      std::cout << "buy on: " << buy <<"sell on: "<< sell;
      }



int main(int argc, char const *argv[]) {
  int n;
  int arrPrice[50];
  std::cout << "Enter day size:" << '\n';
  std::cin >> n;
  std::cout << "Enter Prices for the day: " << '\n';
  for (int i = 0; i < n; i++) {
    std::cin >> arrPrice[i];
  }
    maxStockProfit(arrPrice,n);

  return 0;
}
