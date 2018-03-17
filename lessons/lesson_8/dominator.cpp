/*
  https://app.codility.com/programmers
  Problem Dominator.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    int result = -1;

    unordered_map<int, int> dict;
    for (size_t i = 0; i < v.size(); ++i) {
        ++dict[v[i]];

        if (dict[v[i]] > static_cast<int>(v.size() >> 1))
            result = i;
    }

    return result;
}

int main() {
    vector<int> v = {3, 4, 3, 2, 3, -1, 3, 3};
    printf("%d\n", solution(v));

    return 0;
}
