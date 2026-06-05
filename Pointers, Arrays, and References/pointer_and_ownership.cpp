#include <iostream>
using namespace std;
void consfused(int* p){
    //delete p?
}
int globla{7};
class X{

};
void f(){
    X* pn = new int{7};
    int i {7};
    int q = &i;
    consfused(pn);
    consfused(q);
    consfused(&global);


}
// If confused() deletes p the program will seriously misbehave for the second two calls because we
// may not delete objects not allocated by new (§11.2). If confused() does not delete p the program
// leaks (§11.2.1). In this case, obviously f() must manage the lifetime of the object it creates on the
// free store, but in general keeping track of what needs to be deleted in a large program requires a
// simple and consistent strategy.
// It is usually a good idea to immediately place a pointer that represents ownership in a resource
// handle class, such as vector, string, and unique_ptr. That way, we can assume that every pointer that
// is not within a resource handle is not an owner and must not be deleted. Chapter 13 discusses
// resource management in greater detail.