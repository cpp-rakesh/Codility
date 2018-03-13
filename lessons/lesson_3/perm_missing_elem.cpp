/*
  https://app.codility.com/programmers
  Problem Perm Missing Elem.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    double sum = ((v.size() + 1) * (v.size() + 2) ) >> 1;
    for (size_t i = 0; i < v.size(); ++i)
        sum -= v[i];
    return static_cast<int>(sum);
}

int main() {
    vector<int> v = {2, 3, 1, 5};
    printf("%d\n", solution(v));

    return 0;
}
