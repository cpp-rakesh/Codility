/*
  https://app.codility.com/programmers
  Problem  EquiLeader
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2021
*/

#include <bits/stdc++.h>

int solution(std::vector<int> &A) {
    int leader = 0, count = 0, left_count = 0, right_count = 0;
    std::unordered_map<int, int> dict;
    for (int e : A) {
        ++dict[e];
        if (dict[e] > right_count) {
            right_count = dict[e];
            leader = e;
        }
    }
    const int n = static_cast<int>(A.size());
    for (int i = 0; i < static_cast<int>(A.size()); ++i) {
        if (A[i] == leader) {
            ++left_count;
            --right_count;
        }
        if (((left_count << 1) > i + 1) &&
            ((right_count << 1) > n - i - 1))
            ++count;
    }
    return count;
}

int main() {
    std::vector<int> v = {4,3,4,4,4,2};
    printf("%d\n", solution(v));
    return 0;
}
