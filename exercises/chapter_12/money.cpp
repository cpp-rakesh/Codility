/*
  https://app.codility.com/programmers
  Chapter 12 Money by friends
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/04/2018
*/

#include <bits/stdc++.h>
#include <random>

using namespace std;

inline int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

inline int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

inline int random(int s, int e) {
    random_device rd;
    uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

inline vector<int> get(int n) {
    vector<int> v;
    for (int i = 0; i < n; ++i)
        v.push_back(random(1, 100));

    return v;
}

inline void print(const vector<int>& v) {
    printf("---------------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n---------------------------------------------------\n");
}

int main() {
    vector<int> v = get(5);
    print(v);

    int l = lcm(v[0], v[1]);
    for (size_t i = 2; i < v.size(); ++i)
        l = lcm(l, v[i]);

    printf("LCM == [%4d]\n", l);

    return 0;
}
