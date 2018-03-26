/*
  https://app.codility.com/programmers
  Chapter 12 GCD (Eculidian Algorithms)
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/03/2018
*/

#include <bits/stdc++.h>

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

int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

int main() {
    for (int i = 0; i < 10; ++i) {
        const int a = random(2, 100);
        const int b = random(2, 100);
        printf("GCD(%4d and %4d) == [%4d] || [%4d]\n", a, b, gcd_by_diff(a, b), gcd_by_div(a, b));
    }

    return 0;
}
