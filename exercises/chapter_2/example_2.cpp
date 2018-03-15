/*
  https://app.codility.com/programmers
  Chapter 2 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void reverse(vector<int>& v) {
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
        swap(v[i++], v[j--]);
}

inline int random(int s, int e) {
    return s + rand() % (e - s + 1);
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
        v.push_back(random(1, 100));

    return v;
}

int main() {
    vector<int> v = get(30);
    print(v);
    reverse(v);
    print(v);

    return 0;
}
