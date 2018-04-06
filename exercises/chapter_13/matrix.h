/*
  https://app.codility.com/programmers
  Chapter 13 Matrix
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/04/2018
*/

/*
  Fibonacci Matrix
  F_n+1  F_n
  F_n    F_n-1   for n >= 1
 */

#include <bits/stdc++.h>

using namespace std;

template <typename T, size_t size>
class Matrix {
public:
    Matrix() {
        for (size_t r = 0; r < size; ++r)
            for (size_t c = 0; c < size; ++c)
                m_data[r][c] = 0;
    }

    Matrix(T data[size][size]) {
        for (size_t r = 0; r < size; ++r)
            for (size_t c = 0; c < size; ++c)
                m_data[r][c] = data[r][c];
    }

    Matrix(const Matrix& rhs) {
        for (size_t r = 0; r < size; ++r)
            for (size_t c = 0; c < size; ++c)
                m_data[r][c] = rhs.m_data[r][c];
    }

    Matrix& operator = (const Matrix& rhs) {
        for (size_t r = 0; r < size; ++r)
            for (size_t c = 0; c < size; ++c)
                m_data[r][c] = rhs.m_data[r][c];

        return *this;
    }

    ~Matrix() {}

    Matrix operator * (const Matrix& rhs) {
        Matrix<T, size> m;
        for (size_t r = 0; r < size; ++r) {
            for (size_t c = 0; c < size; ++c) {
                for (size_t i = 0; i < size; ++i) {
                    m.m_data[r][c] += (m_data[r][i] * rhs.m_data[i][c]);
                }
            }
        }

        return m;
    }

    void Show() const {
        printf("-----------------------------------\n");
        for (size_t r = 0; r < size; ++r) {
            for (size_t c = 0; c < size; ++c)
                cout << m_data[r][c] << " ";
            printf("\n");
        }
        printf("-----------------------------------\n");
    }

    int Get() const {
        return m_data[0][1];
    }

private:
    T m_data[size][size];
};
