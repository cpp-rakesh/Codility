/*
  https://app.codility.com/programmers
  Chapter 13, Fibonacci Numbers from Matrix
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2018
*/

#include "matrix.h"

Matrix<int, 2> power_mat(Matrix<int, 2> m, int y) {
    if (y == 0) {
        Matrix<int, 2> mat;
        return mat;
    } else if (y == 1) {
        return m;
    } else {
        Matrix<int, 2> mat = power_mat(m, y >> 1);
        if (y % 2)
            return mat * mat * m;
        else
            return mat * mat;
    }
}

int main() {
    int data[2][2] = {{1, 1}, {1, 0}};
    Matrix<int, 2> mat(data);
    clock_t start = clock();
    for (int y = 0; y <= 25; ++y)
        printf("%d ", power_mat(mat, y).Get());
    printf("\nExecution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    return 0;
}
