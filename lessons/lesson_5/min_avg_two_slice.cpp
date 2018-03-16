/*
  https://app.codility.com/programmers
  Problem Minimum Average Two Slice.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

void print(const vector<int>& v) {
    printf("----------------------------------------------\n");
    for (size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n----------------------------------------------\n");
}

int solution(vector<int>& v) {
    double min  = 1e+5 + 1;
    int min_pos = 0;

    size_t i = 0;
    while (1) {
        double avg = (v[i] + v[i + 1]) / static_cast<double>(2);
        if (avg < min) {
            min     = avg;
            min_pos = i;
        }

        if (i == v.size() - 2)
            break;

        avg = (v[i] + v[i + 1] + v[i + 2]) / static_cast<double>(3);
        if (avg < min) {
            min     = avg;
            min_pos = i;
        }

        ++i;
    }

    return min_pos;
}

int main() {
    vector<int> v = {4, 2, 2, 5, 1, 5, 8};
    print(v);
    printf("Minimum slice starts at == [%d]\n", solution(v));

    return 0;
}
