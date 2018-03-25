/*
  https://app.codility.com/programmers
  Chapter 11 Factorization
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> factorization(int n) {
    vector<bool> p(n + 1, true);

    for (size_t i = 2; i < p.size(); ++i)
        if ((n % i == 0) && p[i])
            for (size_t j = i * 2; j < p.size(); j += i)
                p[j] = false;
        else
            p[i] = false;

    vector<int> factors;
    for (size_t i = 2; i < p.size(); ++i)
        if (p[i])
            factors.push_back(i);

    return factors;
}

void print(const vector<int>& p) {
    printf("----------------------------------------------------\n");
    for (size_t i = 0; i < p.size(); ++i)
        printf("%d ", p[i]);
    printf("\n----------------------------------------------------\n");
}

int main() {
    const vector<int> p1 = factorization(10);
    print(p1);

    const vector<int> p2 = factorization(17);
    print(p2);

    const vector<int> p3 = factorization(10839);
    print(p3);

    return 0;
}
