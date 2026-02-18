#include <iostream>
using namespace std;

class Student {
    public:
         int age;
         
         Student(int a) {
            age = a;
         }
         Student& operator=(const Student& s){
            age = s.age;
            cout << "Copy assignment called\n";
            return *this;
         }
};

int main() {
    Student s1(20);
    Student s2(10);
    s1 = s2;
    cout << s2.age;
}