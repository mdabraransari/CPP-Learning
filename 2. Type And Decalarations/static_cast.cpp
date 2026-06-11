#include <iostream>
using namespace std;
class Base {
    public: 
        virtual void show(){
            cout << "This is Base class" << endl; 
        }
};
class Derived: public Base {
    public:
       void show() override {
        cout << "This is Derived class" << endl;
       }
       void derivedFunction(){
        cout << "Derived specific function called" << endl;
       }
};
int main(){
    Base* b = new Derived();
    Derived* d = static_cast<Derived*>(b);
    b->show();
    d->show();
    d->derivedFunction();

    delete b;
    return 0;
}