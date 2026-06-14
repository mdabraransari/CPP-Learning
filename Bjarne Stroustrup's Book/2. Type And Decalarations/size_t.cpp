#include <iostream>
#include <cstddef>
#include <limits>

using namespace std;

void* allocate(size_t n) {
   return new char[n];
}

int main() {
   cout << "size_t is an unsigned integer type used for sizes and indexes.\n";
   cout << "size of size_t: " << sizeof(size_t) << " bytes\n";
   cout << "maximum value of size_t: " << numeric_limits<size_t>::max() << endl;

   int numbers[] = {10, 20, 30, 40, 50};
   size_t length = sizeof(numbers) / sizeof(numbers[0]);

   cout << "Array length: " << length << '\n';
   for (size_t i = 0; i < length; ++i) {
      cout << "numbers[" << i << "] = " << numbers[i] << '\n';
   }

   size_t bytes = 16;
   void* memory = allocate(bytes);
   cout << "\nAllocated " << bytes << " bytes using size_t.\n";

   delete[] static_cast<char*>(memory);

   return 0;
}
