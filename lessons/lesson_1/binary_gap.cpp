/*
  https://app.codility.com/programmers
  Problem Binary Gap.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/03/2018
*/

#include <bits/stdc++.h>

int solution(int n) {
    bool status = false;
    int m       = 0;
    int max     = 0;

    while (n) {
        if (n % 2) {
            if (m > max)
                max = m;
            m      = 0;
            status = true;
        } else {
            if (status) ++m;
        }

        n /= 2;
    }

    return max;
}

int main() {
    printf("%d\n", solution(1041));

    return 0;
}

