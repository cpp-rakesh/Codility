/*
  https://app.codility.com/programmers
  Chapter 10 Is Prime
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

int main() {
    for (int i = 0; i < 20; ++i) {
        const int n = random(1, 100000);
        printf("[%8d] %s\n", n, is_prime(n) ? "is a prime number" : "is NOT a prime number");
    }

    return 0;
}
