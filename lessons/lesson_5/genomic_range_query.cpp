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

int min(const vector<vector<int>>& dict, int s, int e) {
    for (size_t i = 0; i < dict.size(); ++i) {
        if ((dict[i][e + 1] - dict[i][s]) > 0)
            return i + 1;
    }
}

vector<int> solution(string& s, vector<int>& p, vector<int>& q) {
    unordered_map<char, int> genes;
    genes['A'] = 0;
    genes['C'] = 1;
    genes['G'] = 2;
    genes['T'] = 3;

    vector<vector<int>> dict;
    vector<int> a(s.size() + 1, 0);
    for (size_t i = 0; i < 4; ++i)
        dict.push_back(a);

    for (size_t i = 0; i < s.size(); ++i) {
        for (size_t j = 0; j < dict.size(); ++j)
            dict[j][i + 1] = dict[j][i];
        ++dict[genes[s[i]]][i + 1];
    }

    vector<int> r;
    for (size_t i = 0; i < p.size(); ++i)
        r.push_back(min(dict, p[i], q[i]));

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
