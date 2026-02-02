#include <iostream>

namespace num1{
     int value = 10;
}
namespace num2 {
    int value = 15;
}

int main(){
    std::cout << num1::value << std::endl;
    std::cout << num2::value << std::endl;

}