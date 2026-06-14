#include <iostream>
using namespace std;
using Pchar = char*;

int main(){
    char b = 'c';
    Pchar a = &b;
    cout << a;

}