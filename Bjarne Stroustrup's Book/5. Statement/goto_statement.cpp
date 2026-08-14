#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i = 1;

start:
    if (i <= 5)
    {
        printf("%d\n", i);
        i++;
        goto start;
    }

    return 0;
}