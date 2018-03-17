/*
  https://app.codility.com/programmers
  Problem Count Factors.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    if (n <= 1)
        return 1;

    int c = 2;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            ++c;

            const int x = n / i;
            if ((n % x == 0) && (x != i))
                ++c;
        }
    }

    return c;
}

int main() {
    printf("%d\n", solution(4));
    return 0;
}
