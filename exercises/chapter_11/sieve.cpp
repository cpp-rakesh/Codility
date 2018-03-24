/*
  https://app.codility.com/programmers
  Chapter 11 Sieve of Eratosthenes
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> p(n + 1, true);

    for (size_t i = 2; i < p.size(); ++i)
        if (p[i])
            for (size_t j = 2 * i; j < p.size(); j += i)
                p[j] = false;

    vector<int> primes;
    for (size_t i = 2; i < p.size(); ++i)
        if (p[i])
            primes.push_back(i);

    return primes;
}

void print(const vector<int>& p) {
    printf("----------------------------------------------------\n");
    for (size_t i = 0; i < p.size(); ++i)
        printf("%d ", p[i]);
    printf("\n----------------------------------------------------\n");
}

int main() {
    const vector<int> p = sieve(100);
    print(p);

    return 0;
}
