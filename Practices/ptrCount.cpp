#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int count_x(const char *p, char x)
{
    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p != 0; ++p)
    {
        if (*p == x)
        {
            ++count;
        }
    }
    return count;
}

int main()
{

    string text;
    char c;
    cout << "Enter text: \n";
    getline(cin, text);
    cout << "Which letter you want to count:\n";
    cin >> c;
    const char *str = text.c_str();
    int count = count_x(str, c);
    cout << "The number of " << c << " are: " << count;

    return 0;
}