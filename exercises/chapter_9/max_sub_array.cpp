/*
  https://app.codility.com/programmers
  Chapter 9 Maximum sub array problem.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int n_cube(const vector<int>& v) {
    int max = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = i; j < v.size(); ++j) {
            int sum = 0;
            for (size_t k = i; k <= j; ++k)
                sum += v[k];
            if (sum > max)
                max = sum;
        }
    }

    return max;
}

int n_square(const vector<int>& v) {
    int mm = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        int sum = 0;
        for (size_t j = i; j < v.size(); ++j) {
            sum += v[j];
            mm = max(mm, sum);
        }
    }

    return mm;
}

int n(const vector<int>& v) {
    int mm  = 0;
    int end = 0;

    for (size_t i = 0; i < v.size(); ++i) {
        end = max(0, end + v[i]);
        mm  = max(mm, end);
    }

    return mm;
}

void test_max_sub_array_problem() {
    vector<int> v = {1, 2, 3, -9, 2, 6, 1, 8, -8, 2, 8, 9, -1};
    clock_t start = clock();
    printf("Maximum sub array )(n ^ 3) == [%d]\n", n_cube(v));
    printf("Execution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    start = clock();
    printf("Maximum sub array )(n ^ 2) == [%d]\n", n_square(v));
    printf("Execution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    start = clock();
    printf("Maximum sub array )(n    ) == [%d]\n", n(v));
    printf("Execution time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
}

int main() {
    test_max_sub_array_problem();

    return 0;
}
