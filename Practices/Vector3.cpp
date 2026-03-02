#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Entry
{
    string name;
    int number;

};

ostream& operator<<(ostream& os, const Entry& e)
{
    os << e.name << ": " << e.number;
    return os;
}

vector<Entry> phone_book = {
    {"David Warner",123456},
    {"Karl peterson", 234567},
    {"Alex",34567}
};
void print_book(const vector<Entry>& book)
{
    for (int i = 0; i != book.size(); i++){
        cout << book[i] << "\n";
    }
}
int main(){
    print_book(phone_book);
}