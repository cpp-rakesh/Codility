/*
  https://app.codility.com/programmers
  Problem Distinct.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> &v) {
    int c = 0;
    unordered_map<int, bool> dict;

    for (size_t i = 0; i < v.size(); ++i) {
        if (!dict[v[i]]) {
            dict[v[i]] = true;
            ++c;
        }
    }

    return c;
}

int main() {
    vector<int> v = {2, 1, 1, 2, 3, 1};
    printf("%d\n", solution(v));

    return 0;
}
