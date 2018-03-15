/*
  https://app.codility.com/programmers
  Chapter 5 Exercise 2.
  Mushrooms growing one.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/


#include <bits/stdc++.h>

using namespace std;

inline int random(int s, int e) {
    return s + rand() % (e - s + 1);
}

inline vector<int> get(int n) {
    vector<int> r;
    for (int i = 0; i < n; ++i)
        r.push_back(random(1, 10));

    return r;
}

inline void print(const vector<int>& v) {
    printf("------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n------------------------------------------\n");
}

inline int max(int a, int b) {
    return a > b ? a : b;
}

inline int total(const vector<int>& dict, int x, int y) {
    printf("x == [%d] || y == [%d]\n", x, y);
    if (x == 0)
        return dict[y];
    else
        return dict[y] - dict[x - 1];
}

int max_mushrooms(const vector<int>& v, int k, int m) {
    vector<int> dict(v.size(), 0);
    dict[0] = v[0];
    for (size_t i = 1; i < v.size(); ++i)
        dict[i] = dict[i - 1] + v[i];

    int mm = 0;
    for (size_t i = k - m; i <= k; ++i)
        mm = max(mm, total(dict, i, i + 4));

    return mm;
}

int main() {
    const vector<int> v = get(20);
    print(v);

    int k = 5;
    int m = 3;
    printf("Maximum mushrooms from position [%d] with moves [%d] == [%d]\n", k, m, max_mushrooms(v, k, m));

    return 0;
}