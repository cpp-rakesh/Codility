/*
  https://app.codility.com/programmers
  Problem Odd Occurrences in Array.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    int r = 0;
    for (size_t i = 0; i < v.size(); ++i)
        r ^= v[i];

    return r;
}

int main() {
    vector<int> v = {1, 1, 2, 3, 4, 2, 3};
    printf("%d\n", solution(v));

    return 0;
}
