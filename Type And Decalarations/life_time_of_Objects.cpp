#include <iostream>
using namespace std;

class Object{
    public:
       Object(const string& name){
        this->name = name;
        cout << "Constructor called for " << name << endl;

       }
       ~Object(){
        cout << "Destructor called for " << name << endl;
       }
       private:
         string name;
};

Object globalObj("Global Object");

void functionExample(){
    Object localObj("Local Object");
    static Object staticObj("Static Object");

    Object* dynamicObj = new Object("Dynamic Object");

    cout << "Instide functionExample()" << endl;

    delete dynamicObj;
}

int main(){
    cout << "Lifetime of Objects"
    cout << "Program started\n" << endl;
    functionExample();
    cout <<"Calling function again...\n" << endl;
    functionExample();
    cout << "Program ending" << endl;
    return 0;
}
