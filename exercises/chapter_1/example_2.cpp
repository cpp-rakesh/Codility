/*
  https://app.codility.com/programmers
  Chapter 1 Exercise 2.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

void print_stars(int n) {
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf("  ");

        for (int j = 0; j < (2 * i) + 1; ++j)
            printf("* ");

        printf("\n");
    }
}

inline int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

int main() {
    print_stars(random(1, 20));

    return 0;
}
