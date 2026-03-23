#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Student {
    public:
        string name;

        Student() {
            name = "Unknown";
        }

        void show() {
            cout << "Student name: " << name << endl;
        }
};

int main(){
    auto students = make_unique<Student[]>(5);

    students[0].name = "Aman";
    students[1].name = "Priya";
    students[2].name = "Rahul";

    students[0].show();
    students[1].show();
    students[2].show();
    students[4].show();
}
