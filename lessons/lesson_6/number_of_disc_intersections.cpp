/*
  https://app.codility.com/programmers
  Problem Maximum Product of Three.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

const int limit = 1e+7;

int solution(vector<int>& a) {
    int c = 0;
    vector<int> intersect(a.size() + 1, 0);

    for (size_t i = 0; i < a.size(); ++i) {
        if (static_cast<int>(i) <= a[i]) {
            c += i;
        }
        else {
            c += a[i];
            c += i - a[i] - intersect[i - a[i]];
        }

        if (c > limit)
            return -1;

        intersect[i + 1] += intersect[i];
        if (a[i] < static_cast<int>(a.size()) && i + a[i] + 1 < a.size())
            ++intersect[i + a[i] + 1];
    }

    return c;
}

int main() {
    vector<int> v = {1, 5, 2, 1, 4, 0};
    printf("%d\n", solution(v));

    return 0;
}
