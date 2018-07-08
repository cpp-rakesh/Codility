/*
  https://app.codility.com/programmers
  Problem Cyclic Rotation.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

vector<int> solution(vector<int>& v, int k) {
    std::vector<int> r(v.size(), 0);
    for (size_t i = 0; i < v.size(); ++i)
        r[(i + k) % v.size()] = v[i];

    return r;
}

int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

void print(const vector<int>& v) {
    printf("---------------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n---------------------------------------------------\n");
}

int main() {
    vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(random(1, 10));

    print(v);
    v = solution(v, 3);
    print(v);

    return 0;
}
