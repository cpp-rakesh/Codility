/*
  https://app.codility.com/programmers
  Chapter 6, Selection Sort.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

template <typename T>
void swap_data(T& a, T& b) {
    const T t = a;
    a = b;
    b = t;
}

template <typename T>
void selection_sort(vector<T>& v) {
    for (size_t i = 0; i < v.size() - 1; ++i) {
        T min = v[i];
        size_t pos = i;
        for (size_t j = i + 1; j < v.size(); ++j) {
            if (v[j] < min) {
                min = v[j];
                pos = j;
            }
        }

        swap_data(v[i], v[pos]);
    }
}

