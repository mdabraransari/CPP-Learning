#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

   vector<int> a = {1, 4, 2, 7, 3};

   replace_if(a.begin(),a.end(),
               [](int x){ return x < 3;}, 
             0);

   for(int x: a)
         cout << x << " ";


   return 0;
}