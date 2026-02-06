#include <iostream>
using namespace std;
int sum(int arr[], int n) {
    int total = 0;

    for(int i = 0; i < n; i++)
       total += arr[i];

    return total;
}
int main() {
    int a[5] = {1,2,3,4,5};

    cout << "Sum = " << sum(a, 5) << endl;
}