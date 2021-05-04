/*
  https://app.codility.com/programmers
  Problem Alpha 2010.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    vector<bool> dict(v.size(), false);

    int pos = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (!dict[v[i]]) {
            dict[v[i]] = true;
            pos = i;
        }
    }

    return pos;
}

int main() {
    vector<int> v = {2, 2, 1, 0, 1};
    printf("%d\n", solution(v));

    return 0;
}
