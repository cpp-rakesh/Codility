/*
  https://app.codility.com/programmers
  Chapter 7 Exercise 1.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int grocery(const vector<int>& v) {
    int size   = 0;
    int result = 0;

    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i]) {
            --size;
        } else {
            ++size;
            result = max(result, -size);
        }
    }

    return size;
}

int main() {
    const vector<int> v = {0, 0, 0, 1, 1, 1, 1};
    printf("%d\n", grocery(v));

    return 0;
}
