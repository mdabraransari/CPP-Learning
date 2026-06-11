#include <iostream>
#include <vector>
using namespace std;

int main() {
   int a1{10};
   int a2 = {20};
   int a3 = 30;
   int a4(40);
   int arr[] = { a1, a2, a3, a4};
   for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
      cout << arr[i] << endl;
   }
   auto z1 {99};
   auto z2 = 99;
   vector<int> v1{99};// v1 is vector of 1 element with the value 99
   vector<int> v2(99);// v2 is a vector of 99 elements with the default value 0
   vector<string> v1 {"hello"}; //v1 is a vector of 1 element with the value "hello"
   //vector<string> v2("hello");// error: no vector constructor takes a string literal
   int x {};// x becomes 0
   char buf[1024]{};// buf[i] becomes 0 for all i
   int a[]= {1,2};
   struct S { int x; string z; };
   S s = { 1, "Helios"};


   return 0;
}