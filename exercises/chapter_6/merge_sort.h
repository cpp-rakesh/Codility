/*
  https://app.codility.com/programmers
  Chapter 6, Selection Sort.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

template <typename T>
void merge(vector<T>& v, int s, int m, int e) {
    vector<T> left;
    for (int i = s; i <= m; ++i)
        left.push_back(v[i]);

    vector<T> right;
    for (int i = m + 1; i <= e; ++i)
        right.push_back(v[i]);

    int l_i = 0;
    int r_i = 0;
    int i   = s;
    while (l_i < left.size() && r_i < right.size()) {
        if (left[l_i] < right[r_i])
            v[i++] = left[l_i++];
        else
            v[i++] = right[r_i++];
    }

    while (l_i < left.size())
        v[i++] = left[l_i++];
    while (r_i < right.size())
        v[i++] = right[r_i++];
}

template <typename T>
void merge_sort(vector<T>& v, int s, int e) {
    if (s < e) {
        const int m = (s + e) >> 1;
        merge_sort(v, s, m);
        merge_sort(v, m + 1, e);
        merge(v, s, m, e);
    }
}
