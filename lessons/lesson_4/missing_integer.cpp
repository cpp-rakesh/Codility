/*
  https://app.codility.com/programmers
  Problem Missing Integer.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    unordered_map<int, bool> dict;
    for (size_t i = 0; i < v.size(); ++i)
        if (v[i] > 0)
            dict[v[i]] = true;

    for (int i = 1; i <= static_cast<int>(v.size()) + 1; ++i)
        if (!dict[i]) return i;
}

int main() {
    vector<int> v = {1, 2, 3};
    printf("%d\n", solution(v));

    return 0;
}
