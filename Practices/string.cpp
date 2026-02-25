#include <iostream>
using namespace std;

string compose(const string &name, const string &domain)
{
    return name + "@" + domain;
}
int main()
{
    auto addr = compose("meabrar101", "gmail.com");
    cout << addr;
    return 0;
}