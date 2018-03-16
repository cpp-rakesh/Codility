/*
  https://app.codility.com/programmers
  Problem Stone Wall.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& v) {
    int size   = 0;
    int stones = 0;
    vector<int> wall(v.size(), 0);

    for (size_t i = 0; i < v.size(); ++i) {
        while (size > 0 && (wall[size - 1] > v[i]))
            --size;

        if (!((size > 0) && (wall[size - 1] == v[i]))) {
            ++stones;
            wall[size] = v[i];
            ++size;
        }
    }

    return stones;
}

int main() {
    vector<int> v = {8, 8, 5, 7, 9, 8, 7, 4, 8};
    printf("%d\n", solution(v));

    return 0;
}
