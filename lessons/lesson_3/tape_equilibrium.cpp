/*
  https://app.codility.com/programmers
  Problem Tape Equilibrium.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    int min = 0;
    if (v.size()) {
        int l = v[0];
        int r = 0;
        for (size_t i = 1; i < v.size(); ++i)
            r += v[i];

        min = abs(l - r);
        for (size_t i = 1; i < v.size() - 1; ++i) {
            l += v[i];
            r -= v[i];
            if (abs(l - r) < min)
                min = abs(l - r);
        }
    }

    return min;
}

int main() {
    vector<int> v = {3, 1, 2, 4, 3};
    printf("%d\n", solution(v));

    return 0;
}
