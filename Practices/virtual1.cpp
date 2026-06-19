// A **virtual function **in C++ is a member function
//  that can be **overridden in a derived class **and is
//   resolved at runtime through
//  a base - class pointer or reference.
//  It enables **runtime polymorphism **.
// ```cpp
#include <iostream>
                                                                                                                                                              using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog barks\n";
    }
};

int main()
{
    Animal *a = new Dog();

    a->speak(); // Dog barks

    delete a;
}
// ```
/*
// Without `virtual`, `a->speak()` would call `Animal::speak()`
 because `a` is an `Animal*`.

// With `virtual`, C++ checks the actual object type at runtime, 
sees that it is a `Dog`, and calls `Dog::speak()`.

// Key points:

// - Use `virtual` in the base class.
// - Use `override` in the derived class for safety.
// - Virtual functions are used when you want derived classes 
to provide their own behavior.
// - If a class has virtual functions and you delete derived 
objects through base pointers, the base destructor should usually 
be virtual too:

// ```cpp
// class Animal
// {
// public:
//     virtual ~Animal() = default;
// };
// ```

//     So in simple words : a virtual function lets C++ call the
 **child class version **of a function even when you are using a
  **parent class pointer or
//                          reference **.*/