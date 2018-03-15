/*
  https://app.codility.com/programmers
  Chapter 5 Exercise 1.
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
    vector<int> dict(v.size(), 0);
    dict[0] = v[0];
    for (size_t i = 1; i < v.size(); ++i)
        dict[i] = dict[i - 1] + v[i];

    print(dict);

    if (s == 0)
        return dict[e];
    else
        return dict[e] - dict[s - 1];
}

int main() {
    const vector<int> v = get(20);
    print(v);
    int s = 4;
    int e = 10;
    printf("Total slices from [%d] to [%d] == [%d]\n", s, e, total_slice(v, s, e));

    return 0;
}
