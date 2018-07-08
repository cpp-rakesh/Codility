/*
  https://app.codility.com/programmers
  Chapter 12 GCD (Eculidian Algorithms)
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/03/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

int gcd_by_diff(int a, int b) {
    if (a == b)
        return a;
    else if (a > b)
        return gcd_by_diff(a - b, b);
    else
        return gcd_by_diff(a, b - a);
}

int gcd_by_div(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd_by_div(b, a % b);
}

int gcd_binary_euclidian(int a, int b, int r) {
    if (a == b)
        return r * a;
    else if ((a % 2 == 0) && (b % 2 == 0))
        return gcd_binary_euclidian(a >> 1, b >> 1, r << 1);
    else if (a % 2 == 0)
        return gcd_binary_euclidian(a >> 1, b, r);
    else if (b % 2 == 0)
        return gcd_binary_euclidian(a, b >> 1, r);
    else if (a > b)
        return gcd_binary_euclidian(a - b, b, r);
    else
        return gcd_binary_euclidian(a, b - a, r);
}

int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

int main() {
    for (int i = 0; i < 10; ++i) {
        const int a = random(2, 100);
        const int b = random(2, 100);
        printf("GCD(%4d and %4d) == [%4d] || [%4d] || [%4d]\n", a, b, gcd_by_diff(a, b), gcd_by_div(a, b), gcd_binary_euclidian(a, b, 1));
    }

    return 0;
}
