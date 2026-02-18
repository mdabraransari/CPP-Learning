#include <iostream>
using namespace std;

class Student {
    public:
         int age;
         Student(const Student& s) {
            age = s.age;
            cout << "Copy constructor called\n";
         }
         Student(int a) {
            age = a;
         }
};

int main() {
    Student s1(20);
    Student s2 = s1;

    cout << s2.age;
}