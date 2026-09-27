#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int getMax_sum(int mat[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++) {
        int rowSum_I = 0;
        for (int j = 0; j < cols; j++) {
            rowSum_I += mat[i][j];
        }

        maxRowSum = max(maxRowSum, rowSum_I);
    }
    return maxRowSum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 3;

    cout << getMax_sum(matrix, rows, columns) << endl;
    return 0;
}