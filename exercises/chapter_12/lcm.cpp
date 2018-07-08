/*
  https://app.codility.com/programmers
  Chapter 12 LCM
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/04/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

inline int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

inline int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

inline int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

int main() {
    for (int i = 0; i < 10; ++i) {
        const int a = random(1, 100);
        const int b = random(1, 100);
        printf("LCM(%4d, %4d) == [%4d]\n", a, b, lcm(a, b));
    }

    return 0;
}
