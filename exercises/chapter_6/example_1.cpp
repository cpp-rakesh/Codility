/*
  https://app.codility.com/programmers
  Chapter 6 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

inline int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

inline vector<int> get(int n) {
    vector<int> r;
    for (int i = 0; i < n; ++i)
        r.push_back(random(1, 20));

    return r;
}

inline void print(const vector<int>& v) {
    printf("----------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n----------------------------------------------\n");
}

int distinct(vector<int>& v) {
    sort(v.begin(), v.end());

    int c = 0;
    for (size_t i = 1; i < v.size(); ++i)
        if (v[i] != v[i - 1])
            ++c;

    return c;
}


int main() {
    vector<int> v = get(20);
    print(v);
    printf("Distinct elements == [%d]\n", distinct(v));

    return 0;
}
