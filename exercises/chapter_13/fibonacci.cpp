/*
  https://app.codility.com/programmers
  Chapter 12 GCD (Eculidian Algorithms)
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

inline void print(const vector<int>& v) {
    printf("---------------------- Fibonacci Numbers -------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n-----------------------------------------------------------------\n");
}

vector<int> fibo_numbers(int n) {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i <= n; ++i)
        v.push_back(v[v.size() - 1] + v[v.size() - 2]);

    return v;
}

int main() {
    const vector<int> v = fibo_numbers(20);
    print(v);

    return 0;
}
