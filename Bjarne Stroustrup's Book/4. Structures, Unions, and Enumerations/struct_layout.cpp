#include <iostream>
using namespace std;

// struct Readout
// {
//     char hour;
//     int value;
//     char seq;
// };
// ordered members by size for minimize wasted space;
struct Readout
{
    int value;
    char seq;
    char hour;
};

int main() {
   int a = sizeof(Readout);
   cout << a;
   return 0;
}