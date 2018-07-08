/*
  https://app.codility.com/programmers
  Chapter 2 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

int days(const vector<int>& v) {
    int c = 0;
    for (size_t i = 0; i < v.size(); ++i)
        if (v[i] < 0)
            ++c;

    return c;
}

inline int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

void print(const vector<int>& v) {
    printf("---------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n---------------------------------------\n");
}

vector<int> get(int n) {
    vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(-20, 40));

    return v;
}

int main() {
    const vector<int> v = get(30);
    print(v);
    printf("Cold days == [%d]\n", days(v));

    return 0;
}
