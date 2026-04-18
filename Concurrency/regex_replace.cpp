#include <iostream>
#include <regex>
using namespace std;
int main(){
    string s = "I have 2 apples and 3 oranges";
    regex pattern("[0-9]");
    cout << regex_replace(s, pattern , "X");
}