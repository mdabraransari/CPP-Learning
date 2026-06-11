#include <iostream>
using namespace std;

int main()
{

    string k = "\\w\\\\w";
    string s = R"(\w\\w)";
    cout << k << endl;
    cout << s << endl;
    cout << R"("quoted string")" << endl;
    string counts{R"(1
        22
        333)"};
    cout << counts;
    return 0;
}