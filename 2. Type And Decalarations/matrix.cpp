#include <iostream>
#include <initializer_list>
#include <stdexcept>
#include <vector>
// #include <Eigen/Dense>
using namespace std;

template <class T>
class Matrix {
    int row_count;
    int col_count;
    vector<T> elements;

public:
    Matrix() : row_count(0), col_count(0) {}

    Matrix(int rows, int cols, const T& value = T{})
        : row_count(rows), col_count(cols)
    {
        if (rows < 0 || cols < 0) {
            throw invalid_argument("Matrix size cannot be negative");
        }
        elements.resize(rows * cols, value);
    }

    Matrix(initializer_list<initializer_list<T>> values)
        : row_count(values.size()),
          col_count(values.size() == 0 ? 0 : values.begin()->size())
    {
        for (const auto& row : values) {
            if (static_cast<int>(row.size()) != col_count) {
                throw invalid_argument("All matrix rows must have the same size");
            }
            for (const auto& value : row) {
                elements.push_back(value);
            }
        }
    }

    int rows() const
    {
        return row_count;
    }

    int cols() const
    {
        return col_count;
    }

    T& operator()(int row, int col)
    {
        check_index(row, col);
        return elements[row * col_count + col];
    }

    const T& operator()(int row, int col) const
    {
        check_index(row, col);
        return elements[row * col_count + col];
    }

private:
    void check_index(int row, int col) const
    {
        if (row < 0 || row >= row_count || col < 0 || col >= col_count) {
            throw out_of_range("Matrix index out of range");
        }
    }
};

template <class T, class U>
auto operator+(const Matrix<T>& a, const Matrix<U>& b) -> Matrix<decltype(T{}+U{})>
{
    if (a.rows() != b.rows() || a.cols() != b.cols()) {
        throw invalid_argument("Matrices must have the same size for addition");
    }

    Matrix<decltype(T{}+U{})> res(a.rows(), a.cols());
    for(int i = 0; i != a.rows(); i++){
        for(int j = 0; j != a.cols(); j++){
            res(i,j) = a(i,j) + b(i,j);
        }
    }
    return res;
}

template <class T>
ostream& operator<<(ostream& os, const Matrix<T>& matrix)
{
    for (int i = 0; i != matrix.rows(); i++) {
        for (int j = 0; j != matrix.cols(); j++) {
            os << matrix(i, j) << ' ';
        }
        os << '\n';
    }
    return os;
}

int main() {
   Matrix<int> a {
       {1, 2, 3},
       {4, 5, 6}
   };

   Matrix<double> b {
       {0.5, 1.5, 2.5},
       {3.5, 4.5, 5.5}
   };

   auto c = a + b;

   cout << "Matrix A:\n" << a;
   cout << "Matrix B:\n" << b;
   cout << "A + B:\n" << c;

   return 0;
}
