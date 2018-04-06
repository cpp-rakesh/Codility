/*
  https://app.codility.com/programmers
  Chapter 13, Fibonacci Numbers
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

inline void print(const vector<int>& v) {
    printf("---------------------- Fibonacci Numbers -------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n-----------------------------------------------------------------\n");
}

vector<int> fibo_numbers(int n) {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i <= n; ++i)
        v.push_back(v[v.size() - 1] + v[v.size() - 2]);

    return v;
}

int fibo_iterative(int n) {
    int c = 0;
    if (n == 0) {
        c = 0;
    } else if (n == 1) {
        c = 1;
    } else {
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
    }

    return c;
}

int fibo_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo_recursive(n - 1) + fibo_recursive(n - 2);
}

int fibo_recursive_dp(int n, vector<int>& v) {
    if (!v[n]) {
        if (n == 0) {
            v[n] = 0;
        } else if (n == 1) {
            v[n] = 1;
        } else {
            v[n - 1] = fibo_recursive_dp(n - 1, v);
            v[n - 2] = fibo_recursive_dp(n - 2, v);
            v[n] = v[n - 1] + v[n - 2];
        }
    }

    return v[n];
}

void test_fibonacci() {
    clock_t start = clock();
    for (int n = 0; n <= 25; ++n)
        printf("%d ", fibo_iterative(n));
    printf("\n");
    printf("Exeuction time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    start = clock();
    for (int n = 0; n <= 25; ++n)
        printf("%d ", fibo_recursive(n));
    printf("\n");
    printf("Exeuction time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));

    vector<int> v(26, 0);
    start = clock();
    for (int n = 0; n <= 25; ++n)
        printf("%d ", fibo_recursive_dp(n, v));
    printf("\n");
        printf("Exeuction time == [%.08lf] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
}

int main() {
    const vector<int> v = fibo_numbers(25);
    print(v);
    test_fibonacci();

    return 0;
}
