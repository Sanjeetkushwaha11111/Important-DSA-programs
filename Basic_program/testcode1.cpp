#include <iostream>
using namespace std;
int main() {
  for (int i = 1; i <= 15; i++) {
    if (i % 3 == 0) {
      cout << "multiple of 3: " << i << endl;
    }
    if (i % 5 == 0) {
      cout << "multiple of 5: " << i << endl;
    }
  }

  return 0;
}
