#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

void printIteratorCategory(input_iterator_tag) {
    cout << "Input iterator\n";
}

void printIteratorCategory(output_iterator_tag) {
    cout << "Output iterator\n";
}

void printIteratorCategory(forward_iterator_tag) {
    cout << "Forward iterator\n";
}

void printIteratorCategory(bidirectional_iterator_tag) {
    cout << "Bidirectional iterator\n";
}

void printIteratorCategory(random_access_iterator_tag) {
    cout << "Random access iterator\n";
}

template <class Iterator>
void myFunction(Iterator it) {
    typedef typename iterator_traits<Iterator>::iterator_category category;
    printIteratorCategory(category());
    (void)it;
}

int main() {
    vector<int> numbers = {1, 2, 3};
    list<int> values = {4, 5, 6};
    forward_list<int> items = {7, 8, 9};

    myFunction(numbers.begin());
    myFunction(values.begin());
    myFunction(items.begin());

    return 0;
}
