#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    const int width = 80;
    const int height = 20;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {

            double value = sin((double)x / width * 2 * M_PI);
            int wave_y = (value + 1) * height / 2;

            if (wave_y == y)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}