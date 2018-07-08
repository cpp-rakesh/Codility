/*
  https://app.codility.com/programmers
  Chapter 5 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

inline int random(int s, int e) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(s, e);
    return dt(rd);
}

inline vector<int> get(int n) {
    vector<int> r;
    for (int i = 0; i < n; ++i)
        r.push_back(random(1, 100));

    return r;
}

inline void print(const vector<int>& v) {
    printf("----------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n----------------------------------------------\n");
}

int total_slice(const vector<int>& v, int s, int e) {
    vector<int> dict(v.size() + 1, 0);
    for (size_t i = 0; i < v.size(); ++i)
        dict[i + 1] = dict[i] + v[i];

    print(dict);

    return dict[e + 1] - dict[s];
}

int main() {
    const vector<int> v = get(20);
    print(v);
    int s = 4;
    int e = 10;
    printf("Total slices from [%d] to [%d] == [%d]\n", s, e, total_slice(v, s, e));

    return 0;
}
