#include <iostream>
#include <algorithm>
using namespace std;

bool has_c(const string& s, char c)
{
    auto p = find(s.begin(),s.end(),c);
    if (p!=s.end())
    {
        return true;
    }
    else {
        return false;
    }
    
}

int main() {

   string a = "hello";
   char b = 'l';
   cout << has_c(a,b);
   return 0;
}