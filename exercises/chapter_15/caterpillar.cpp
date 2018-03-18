/*
  https://app.codility.com/programmers
  Chapter 15 Caterpillar method.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

bool caterpillar(const vector<int>& v, int s) {
    int front = 0;
    int total = 0;

    for (int back = 0; back < v.size(); ++back) {
        while (front < v.size() && total + v[front] <= s) {
            total += v[front];
            ++front;
        }

        if (total == s)
            return true;

        total -= v[back];
    }
    return false;
}

int main() {
    const vector<int> v = {6, 2, 7, 4, 1, 3, 6};
    printf("%d\n", caterpillar(v, 12));

    return 0;
}
