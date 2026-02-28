#include <iostream>
#include <sstream>
using namespace std;

int main(){
    istringstream is ("25 A");

    int number;
    char c;
    is >> number >> c;
    cout << number << " " << c;
}