#include <iostream>
using namespace std;
//interface
class Shape {
  public:
      virtual void draw() = 0;
};
//derived  
class Circle: public Shape{
    public:
      void draw() {
          cout << "Drawing Circle" << endl;
      }
};
class Square: public Shape {
    public: 
      void draw() {
        cout << "Drawing Square";
      }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();
    s2->draw();

    return 0;
}