/*
  https://app.codility.com/programmers
  Problem Passing Cars.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

const int limit = 1e+9;

int solution(vector<int>& v) {
    int east = 0;
    int west = 0;
    for (size_t i = 0; i < v.size(); ++i)
        if (v[i])
            ++west;
        else
            ++east;

    int total = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] == 0)
            total += west;
        else
            --west;
    }

    return total > limit || total < 0 ? -1 : total;
}

int main() {
    vector<int> v = {0, 1, 0, 1, 1};
    printf("%d\n", solution(v));

    return 0;
}
