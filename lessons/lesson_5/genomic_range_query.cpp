/*
  https://app.codility.com/programmers
  Problem Genomic Range Query.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

void print(const vector<int>& v) {
    printf("----------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n----------------------------------------------\n");
}

int minimum(string& s, int p, int q) {
    map<char, int> dict;
    dict['A'] = 1;
    dict['C'] = 2;
    dict['G'] = 3;
    dict['T'] = 4;

    vector<bool> result(4, false);
    for (int i = p; i <= q; ++i)
        result[dict[s[i]] - 1] = true;

    for (int i = 0; i < 4; ++i)
        if (result[i])
            return i + 1;
}

vector<int> solution(string& s, vector<int>& p, vector<int>& q) {
    vector<int> r;
    for (size_t i = 0; i < p.size(); ++i)
        r.push_back(minimum(s, p[i], q[i]));

    return r;
}

int main() {
    string s = "CAGCCTA";
    vector<int> p = {2, 5, 0};
    vector<int> q = {4, 5, 6};
    vector<int> r = solution(s, p, q);
    print(r);

    return 0;
}
