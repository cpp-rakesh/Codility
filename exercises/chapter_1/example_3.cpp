/*
  https://app.codility.com/programmers
  Chapter 1 Exercise 3.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

double fibonacci(int n) {
    if (n <= 2)
        return 1;

    int i = 3;
    int a = 1;
    int b = 1;
    int c = a + b;
    while (i++ < n) {
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}

int main() {
    for (int i = 1; i <= 40; ++i)
        printf("%.0lf ", fibonacci(i));
    printf("\n");

    return 0;
}
