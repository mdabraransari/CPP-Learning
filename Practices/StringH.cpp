#include <iostream>
#include <string>
#include <list>

int main()
{
    std::string s{"Hello, How are you?"};
    std::list<std::string> slogans{
        "War is peace",
        "Freedom is Slavery",
        "Ignorance is Strength"};
    std::cout << s << std::endl;
    for (const auto &slogan : slogans)
    {
        std::cout << slogan << std::endl;
    }
}
