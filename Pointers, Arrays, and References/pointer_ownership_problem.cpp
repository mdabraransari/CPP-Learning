#include <iostream>
using namespace std;

int main() {
   // Owning same address
   int* p = new int (10);// p owns the memory
   int* q = p;// q points to the same memory
   // ######################################
   //memory leak
   int*p = new int(10);
   p = nullptr;// original address lost
   // ######################################
   // double deletion
   int* p = new int(10);
   int* q = p;

   delete p;
   delete q; // deleting the same memory
   // Dangling pointer
   // ######################################
   int* p = new int(10);
   int* q = p;
    
   delete p;
   cout << *q;// q points to freed memory

   /* Solution is smart pointers :
       unique_ptr
       shared_ptr
       std::unique_ptr<int> p = std::make_unique<int>(10);
       std::shared_ptr<int> p = std::make_shared<int>(10);*/
   return 0;
}