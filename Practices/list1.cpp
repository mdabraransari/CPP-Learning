#include <iostream>
#include <list>
using namespace std;

struct student {
    string name;
    int id;
};
list<student> student_id = {
    {"karan",101},
    {"Varun",102},
    {"Maya",103}
};
int get_id(const string& s){
    for(const auto& x : student_id){
        if(x.name == s){
            return  x.id;
        }
        
    }
    return 0;
}
int main() {
   cout << get_id("Maya");
   
   return 0;
}