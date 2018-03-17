/*
  https://app.codility.com/programmers
  Chapter 8 Golden Leader.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int golden_leader(const vector<int>& v) {
    stack<int> leader;
    for (size_t i = 0; i < v.size(); ++i) {
        if (leader.size()) {
            if (v[i] != leader.top())
                leader.pop();
            else
                leader.push(v[i]);
        } else {
            leader.push(v[i]);
        }
    }

    return leader.empty() ? -1 : leader.top();
}

int main() {
    const vector<int> v = {1, 2, 2, 1, 1, 2, 3, 1, 1, 1};
    printf("%d\n", golden_leader(v));

    return 0;
}
