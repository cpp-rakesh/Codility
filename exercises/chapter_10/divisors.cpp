/*
  https://app.codility.com/programmers
  Chapter 10 Count Divisors
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int divisors_count(int n) {
    int count = 0;
    int i = 1;
    while (i * i < n) {
        if (n % i == 0)
            count += 2;
        ++i;
    }

    if (i * i == n)
        ++count;

    return count;
}


int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

int main() {
    for (int i = 0; i < 20; ++i) {
        const int n = random(1, 100000);
        printf("[%8d] has [%4d] divisors\n", n, divisors_count(n));
    }

    return 0;
}
