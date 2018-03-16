/*
  https://app.codility.com/programmers
  Problem Triangle.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    if (v.size() >= 3) {
        sort(v.begin(), v.end());
        for (size_t i = 0; i < v.size() - 2; ++i) {
            if (v[i] > 0 && (v[i] > v[i + 1] + v[i + 2]))
                return 1;
        }
    }

    return 0;
}

int main() {
    vector<int> v = {10, 50, 5, 1};
    printf("%d\n", solution(v));

    return 0;
}
