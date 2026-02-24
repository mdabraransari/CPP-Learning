#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> products;
    products.push_back("Rice");
    products.push_back("Wheat");
    products.push_back("Maze");
    for ( string s: products)
    {
        cout << s << endl;
    }

}