/*
  https://app.codility.com/programmers
  Problem Maximum Product of Three.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    sort(v.begin(), v.end());
    return max(v[0] * v[1] * v[v.size() - 1],
               v[v.size() - 1] * v[v.size() - 2] * v[v.size() - 3]);
}


int main() {
    vector<int> v = {-5, 5, -5, 4};
    printf("%d\n", solution(v));

    return 0;
}
