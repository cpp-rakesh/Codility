/*
  https://app.codility.com/programmers
  Chapter 4 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

// This has time complexity of n^2
bool swap_slow(const vector<int>& a,
               const vector<int>& b) {
    int s_a = 0;
    for (size_t i = 0; i < a.size(); ++i)
        s_a += a[i];

    int s_b = 0;
    for (size_t i = 0; i < b.size(); ++i)
        s_b += b[i];

    for (size_t i = 0; i < a.size(); ++i) {
        const int c = b[i] - a[i];
        s_a += c;
        s_b -= c;
        if (s_a == s_b)
            return true;

        s_a -= c;
        s_b += c;
    }

    return false;
}

inline int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

inline void print(const vector<int>& v) {
    printf("------------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n------------------------------------------------\n");
}

vector<int> get(int n) {
    vector<int> r;
    for (size_t i = 0; i < n; ++i)
        r.push_back(random(1, 100));

    return r;
}

int main() {
    const vector<int> a = get(20);
    const vector<int> b = get(20);
    print(a);
    print(b);

    printf("They can be balanced == [%d]\n", swap_slow(a, b));
    return 0;
}
