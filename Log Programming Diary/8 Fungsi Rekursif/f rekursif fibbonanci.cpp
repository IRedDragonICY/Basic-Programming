#include <iostream>

using namespace  std;

int factorial(int a) {
   if (a == 1) {
       return 1;
   } else {
      // memanggil fungsi factorial didalam fungsi factorial
      return a * factorial(a-1);
   }
}

int main() {
   cout << factorial(4);
    
   return 0;
}