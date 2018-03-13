/*
  https://app.codility.com/programmers
  Problem Permutation Check.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    unordered_map<int, bool> dict;
    for (size_t i = 0; i < v.size(); ++i)
        dict[v[i]] = true;

    for (size_t i = 1; i <= v.size(); ++i) {
        if (!dict[i])
            return 0;
    }

    return 1;
}

int main() {
    vector<int> v = {1, 1};
    printf("%d\n", solution(v));

    return 0;
}
