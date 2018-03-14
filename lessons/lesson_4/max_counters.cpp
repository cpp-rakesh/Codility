/*
  https://app.codility.com/programmers
  Problem Max Counters.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

void print(const vector<int>& v) {
    printf("-------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n-------------------------------------------\n");
}

vector<int> solution(int n, vector<int>& v) {
    vector<int> r(n, 0);

    int max    = 0;
    int update = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (n + 1 == v[i]) {
            update = max;
        } else {
            if (r[v[i] - 1] < update)
                r[v[i] - 1] = update + 1;
            else
                ++r[v[i] - 1];

            if (r[v[i] - 1] > max)
                max = r[v[i] - 1];
        }
    }

    for (size_t i = 0; i < r.size(); ++i)
        if (r[i] < update)
            r[i] = update;

    return r;
}

int main() {
    vector<int> v = {3, 4, 4, 6, 1, 4, 4};
    print(v);
    v = solution(5, v);
    print(v);

    return 0;
}
