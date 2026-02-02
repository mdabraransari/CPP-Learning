#include <iostream>
using namespace std;

int sum(int n){
    if (n < 1)
    {
        throw invalid_argument("Number must be positive!");
    }
    if (n == 1)
    {
        return 1;
    }
    
    return n + sum(n - 1);

}

int main() {
   int n;
   try {
      cout << "Enter the nth number:\n";
      cin >> n;
      cout << sum(n);
   }
   catch (invalid_argument& e) {
      cout << "Error: " << e.what() << endl;
   }

   return 0;
}