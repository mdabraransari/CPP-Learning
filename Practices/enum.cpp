#include <iostream>
enum class Color
{
    red,
    orange,
    blue,
    green
};
enum class Traffic_light
{
    green,
    yellow,
    red
};
Color col = Color::red;
Traffic_light light = Traffic_light::red;

Traffic_light &operator++(Traffic_light &t)
{
    switch (t)
    {
    case Traffic_light::green:
        return t = Traffic_light::yellow;
        break;
    case Traffic_light::yellow:
        return t = Traffic_light::red;

    case Traffic_light::red:
        return t = Traffic_light::green;
    }
}

std::ostream &operator<<(std::ostream &os, Traffic_light t)
{
    switch (t)
    {
    case Traffic_light::green:
        os << "green";
        break;
    case Traffic_light::yellow:
        os << "yellow";
        break;
    case Traffic_light::red:
        os << "red";
        break;
    }
    return os;
}



int main(){
    Traffic_light next = ++light;
    std::cout << next;
}
