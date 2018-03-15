/*
  https://app.codility.com/programmers
  Chapter 3 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

inline int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

inline double sum(int n) {
    return (n * (n + 1)) >> 1;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        const int n = random(1, 1000);
        printf("sum of 1 + 2 + ... + %6d == [%8.0lf]\n", n, sum(n));
    }

    return 0;
}
