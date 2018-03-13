/*
  https://app.codility.com/programmers
  Problem Frog River One.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(int x, vector<int>& v) {
    set<int> dict;

    for (size_t i = 0; i < v.size(); ++i) {
        dict.insert(v[i]);
        if (dict.size() == x)
            return i;
    }

    return -1;
}

int main() {
    vector<int> v = {1, 3, 1, 4, 2, 3, 5, 4};
    printf("%d\n", solution(5, v));

    return 0;
}
