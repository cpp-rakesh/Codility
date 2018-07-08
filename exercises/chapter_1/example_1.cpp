/*
  https://app.codility.com/programmers
  Chapter 1 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>
#include <random>

void print_stars(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j)
            printf("* ");
        printf("\n");
    }
}

inline int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

int main() {
    print_stars(random(1, 20));

    return 0;
}
