/*
  https://app.codility.com/programmers
  Chapter 15 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

struct Triplet {
    Triplet() : x(0), y(0), z(0) {}
    Triplet(int a, int b, int c) :
        x(a), y(b), z(c) {}

    inline void show() const {
        printf("[%d] + [%d] > [%d]\n", x, y, z);
    }

    int x;
    int y;
    int z;
};

vector<Triplet> triangles(const vector<int>& v) {
    vector<Triplet> r;
    for (size_t x = 0; x < v.size(); ++x) {
        size_t z = x + 2;
        for (size_t y = x + 1; y < v.size(); ++y) {
            while (z < v.size() && v[x] + v[y] > v[z]) {
                r.push_back(Triplet(v[x], v[y], v[z]));
                ++z;
            }
        }
    }

    return r;
}

inline int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

vector<int> get(int n) {
    vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(1, 20));

    return v;
}

inline void print(const vector<int>& v) {
    printf("------------------------------ INPUT ----------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n------------------------------ INPUT ----------------------------------------\n");
}

int main() {
    const vector<int> v     = get(20);
    print(v);
    const vector<Triplet> r = triangles(v);

    for (size_t i = 0; i < r.size(); ++i)
        r[i].show();

    return 0;
}
