#include <iostream>
using namespace std;
//struct is an aggregate of elements of arbitrary type.
struct Address
{
    const char* name;
    int number;
    const char* street;
    const char* town;
    char state[2];
    const char* zip;
};
void f()
{
    Address jd;
    jd.name = "Jim Dandy";
    jd.number = 61;
}
Address jd = {
    "Jim Dandy",
    61, "South St",
    "New Providence", 
    {'N','J'}, "07974"
};
void print_addr(Address* p){
    cout << p->name << '\n'
         << p->number << ' ' << p->street << '\n'
         << p->town << '\n'
         << p->state[0] << p->state[1] << ' ' << p-> zip << '\n';

}
int main(){
    print_addr(&jd);
}